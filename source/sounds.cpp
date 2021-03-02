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
#endif

// #include "combaseapi.h"
// #include "mmdeviceapi.h"

// Didn't get very far here, next stop: https://docs.microsoft.com/en-us/windows/win32/coreaudio/rendering-a-stream

/// For Details: https://docs.microsoft.com/en-us/windows/win32/coreaudio/mmdevice-api

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


///
/// Return audio device name.
///
std::string getAudioDevice()
{
#ifndef IS_MSVC_CXX_COMPILER
    return std::string("Found fake audio device.");
#else

	std::string retStr = std::string("ERROR STRING!");
	LPWSTR deviceId = (LPWSTR) "NO DEVICE FOUND!";

	const CLSID CLSID_MMDeviceEnumerator = __uuidof(MMDeviceEnumerator);
	const IID IID_IMMDeviceEnumerator = __uuidof(IMMDeviceEnumerator);

	HRESULT hr;
	IMMDeviceEnumerator* pEnumerator = NULL;
	IMMDevice* pDevice = NULL;
	WAVEFORMATEX* pwfx = NULL;
	UINT32 bufferFrameCount;
	UINT32 numFramesAvailable;
	UINT32 numFramesPadding;
	BYTE* pData;
	DWORD flags = 0;

	hr = CoInitialize(pEnumerator);

	hr = CoCreateInstance(
		CLSID_MMDeviceEnumerator, NULL,
		CLSCTX_ALL, IID_IMMDeviceEnumerator,
		(void**)&pEnumerator);

	std::cout << "CoCreateInstance(...) HRESULT = " << printError(hr) << std::endl;

	// hr = IMMDevice::Activate(
	IMMDevice* pDefaultEndpoint = NULL;

	hr = pEnumerator->GetDefaultAudioEndpoint(
		eRender, eConsole, &pDefaultEndpoint);

	std::cout << "GetDefaultAudioEndpoint(...) HRESULT = " << printError(hr) << std::endl;
	 
	pDefaultEndpoint->GetId(&deviceId);
	retStr = std::string("Found Windows audio device: ") + (const char*)deviceId;

	return retStr;

#endif
}
