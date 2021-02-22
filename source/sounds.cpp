// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

// #include "combaseapi.h"
#include "mmdeviceapi.h"

// Didn't get very far here, next stop: https://docs.microsoft.com/en-us/windows/win32/coreaudio/rendering-a-stream

/// For Details: https://docs.microsoft.com/en-us/windows/win32/coreaudio/mmdevice-api
void getAudioDevice()
{
    const CLSID CLSID_MMDeviceEnumerator = __uuido(MMDeviceEnumerator);
    const IID IID_IMMDeviceEnumerator = __uuidof(IMMDeviceEnumerator);
    hr = CoCreateInstance(
            CLSID_MMDeviceEnumerator, NULL,
            CLSCTX_ALL, IID_IMMDeviceEnumerator,
            (void**)&pEnumerator);

    return;
}
