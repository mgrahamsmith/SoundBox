///
/// This file is part of the SoundBox Project.
/// Author: Graham Smith
///
/// This work is licensed under the terms of the MIT license.
/// For a copy, see <https://opensource.org/licenses/MIT>.
///

#include <iostream>

#include "sounds.hpp"

#ifdef IS_MSVC_CXX_COMPILER
#include "mmdeviceapi.h"
#include "Audioclient.h"
#endif

// TODO: remove all this macro garbage.

std::string play_sound() 
{ 
#ifdef IS_MSVC_CXX_COMPILER
	return std::string("Let's play a sound on Windows!"); 
#elif IS_GNU_CXX_COMPILER
	return std::string("Let's play a sound on Linux!");
#elif IS_APPLE_CLANG_CXX_COMPILER
	return std::string("Let's play a sound on MacOS!");
#else
	return std::string("Attempting to play sound on unknown platform.");
#endif
}


///
/// Return string with more descriptive HR result error.  For debugging.
///
#ifdef IS_MSVC_CXX_COMPILER
std::string printError(HRESULT& hr)
{
	std::string retStr = "";
	if (hr == 0x800401f0) {
		retStr = "0x800401f0: CoInitialize has not been called.";
	} else if (hr == 0) {
		retStr = "All OK.";
	}
	return retStr;
}
#endif

#ifdef IS_MSVC_CXX_COMPILER
const CLSID CLSID_MMDeviceEnumerator = __uuidof(MMDeviceEnumerator);
const IID IID_IMMDeviceEnumerator = __uuidof(IMMDeviceEnumerator);
const IID IID_IAudioClient = __uuidof(IAudioClient);
#endif

///
/// Return audio device name.
///
const char* getAudioDevice()
{
#ifndef IS_MSVC_CXX_COMPILER
    return std::string("Found fake audio device.");
#else

	std::string retStr = std::string("ERROR STRING!");
	LPWSTR deviceId = (LPWSTR) "NO DEVICE FOUND!";


	HRESULT hr;
	IMMDeviceEnumerator* pEnumerator = NULL;
	IMMDevice* pDevice = NULL;
	IAudioClient* pAudioClient = NULL;

	hr = CoInitialize(pEnumerator);

	hr = CoCreateInstance(
		CLSID_MMDeviceEnumerator, NULL,
		CLSCTX_ALL, IID_IMMDeviceEnumerator,
		(void**)&pEnumerator);

	std::cout << "CoCreateInstance(...) HRESULT = " << printError(hr) << std::endl;

	hr = pEnumerator->GetDefaultAudioEndpoint(
		eRender, eConsole, &pDevice);

	std::cout << "GetDefaultAudioEndpoint(...) HRESULT = " << printError(hr) << std::endl;

	pDevice->GetId(&deviceId);
	std::cout << "Found Windows default device: " << deviceId << std::endl;

	hr = pDevice->Activate(
		IID_IAudioClient, CLSCTX_ALL,
		NULL, (void**)&pAudioClient);

	std::cout << "Activate(...) HRESULT = " << printError(hr) << std::endl;
	 
	return (const char*)deviceId;

#endif
}
