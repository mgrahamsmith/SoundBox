///
/// This file is part of the SoundBox Project.
/// Author: Graham Smith
///
/// This work is licensed under the terms of the MIT license.
/// For a copy, see <https://opensource.org/licenses/MIT>.
///

#include "sounds.hpp"

// #include "combaseapi.h"
#include "mmdeviceapi.h"

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
    return std::string("Found fake audio device.");
}
