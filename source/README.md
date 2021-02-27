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
    *Good dialogue on modern C++, goes over smart pointers and Resource Allocation Is Initialization* principle.

### STOPPING POINT:
Try this next: [RenderExclusiveEventDriven](https://docs.microsoft.com/en-us/windows/win32/coreaudio/renderexclusiveeventdriven)
    * This sample application uses the Core Audio APIs to render audio data to an output device specified by the user. This sample demonstrates event-driven buffering for a rendering client in exclusive mode. For an exclusive-mode stream, the client shares the endpoint buffer with the audio device.

Going to need the [Windows SDK](https://msdn.microsoft.com/windowsvista/bb980924.aspx).
    * Not sure why it's the Windows 7, .NET Framework 4 SDK but hey, they told me to.

After downloading, I can view the release notes at [Windows SDK for Windows 7 and .NET Framework 4 Release Notes](file:///C:/Users/Soti/ReleaseNotes_Win7_1RTMSDK.Htm)

Something went wrong with the SDK install link, I didn't get the RenderExclusiveEventDriven sample in the path listed at this microsoft docs link `\Program Files\Microsoft SDKs\Windows\v7.0\Samples\Multimedia\Audio\RenderExclusiveEventDriven\...`

Attempting to download the Windows 10 SDK, althought I'm not sure this is what I need, since this could be a Win32 API thing...  
Downloading that good good from [here](https://developer.microsoft.com/en-US/windows/downloads/windows-10-sdk/)

Well... that download didn't work either, but good news I found [this in Github - Windows classic samples.](https://github.com/Microsoft/Windows-classic-samples/tree/master/Samples/Win7Samples/multimedia/audio/RenderExclusiveEventDriven)

Cloned classic samples, and copied code.  See [ReadMe.txt](../win_samples/ReadMe.txt) for instructions.
<<<<<<< HEAD
=======


Still no luck - here are the supposed [Win10 samples](https://github.com/Microsoft/Windows-universal-samples) in Github.
>>>>>>> develop/noise_1
