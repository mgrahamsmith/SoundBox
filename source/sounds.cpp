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
/// Return audio device name.
///
std::string getAudioDevice()
{
<<<<<<< HEAD
    return std::string("Found fake audio device.");
=======
#ifdef IS_MSVC_CXX_COMPILER
	LPVOID pEnumerator;
	const CLSID CLSID_MMDeviceEnumerator = __uuidof(MMDeviceEnumerator);
	const IID IID_IMMDeviceEnumerator = __uuidof(IMMDeviceEnumerator);

	HRESULT hr = CoCreateInstance(
		CLSID_MMDeviceEnumerator, NULL,
		CLSCTX_ALL, IID_IMMDeviceEnumerator,
		(void**)&pEnumerator);

	std::cout << "Windows: HRESULT = " << hr << std::endl;
	return std::string("Found Windows audio device.");

#else
    return std::string("Found fake audio device.");
#endif
>>>>>>> develop/noise_1
}
