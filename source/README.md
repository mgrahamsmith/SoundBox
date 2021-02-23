Source Files
============

Contents
--------
* [Setup Instructions](./docs/SetupInstructions.md)
* Windows Core Audio
    * [Audio Endpoint Devices](https://docs.microsoft.com/en-us/windows/win32/coreaudio/audio-endpoint-devices)

Starting here: [About MMDevice API](https://docs.microsoft.com/en-us/windows/win32/coreaudio/mmdevice-api)
----------------

### Links I needed or found helpful:
* [__uuidof Operator](https://docs.microsoft.com/en-us/cpp/cpp/uuidof-operator?view=msvc-160)
* [Welcome back to C++ - Modern C++](https://docs.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-160)
    * Good dialogue on modern C++, goes over smart pointers and *Resource Allocation Is Initialization* principle.

### STOPPING POINT:
Try this next: [RenderExclusiveEventDriven](https://docs.microsoft.com/en-us/windows/win32/coreaudio/renderexclusiveeventdriven)
    * This sample application uses the Core Audio APIs to render audio data to an output device specified by the user. This sample demonstrates event-driven buffering for a rendering client in exclusive mode. For an exclusive-mode stream, the client shares the endpoint buffer with the audio device.

Going to need the [Windows SDK](https://msdn.microsoft.com/windowsvista/bb980924.aspx).
    * Not sure why it's the Windows 7, .NET Framework 4 SDK but hey, they told me to.
