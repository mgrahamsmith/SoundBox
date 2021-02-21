
# SoundBox

Cross-platform desktop application for low level audio manipulation.

Current support: Windows 10 only.

## Continuous build status

| Build Type  | Status |
|-------------|--------|
| **Windows** | [![Build Status](https://dev.azure.com/mgrahamsmith/SoundBox/_apis/build/status/Windows?branchName=azure-pipeline-cmake)](https://dev.azure.com/mgrahamsmith/SoundBox/_build/latest?definitionId=1&branchName=azure-pipeline-cmake) |
| **Linux**   | [![Build Status](https://dev.azure.com/mgrahamsmith/SoundBox/_apis/build/status/Windows?branchName=azure-pipeline-cmake)](https://dev.azure.com/mgrahamsmith/SoundBox/_build/latest?definitionId=1&branchName=azure-pipeline-cmake)  |
| **MacOS**   | [![Build Status](https://dev.azure.com/mgrahamsmith/SoundBox/_apis/build/status/Windows?branchName=azure-pipeline-cmake)](https://dev.azure.com/mgrahamsmith/SoundBox/_build/latest?definitionId=1&branchName=azure-pipeline-cmake) |

## Project Contents
-----------
* source
    * [README](./source/README.md)
    * docs
        * [Setup Instructions](.source/docs/SetupInstructions.md)

## Plans
--------
* Low level audio device interface.
* Native desktop application.
* Windows 10 / Linux / Android. MacOS/iOS if I have the patience.
* GUI (TBD)
    * Qt, Tk, wxWidgets?
    * Python + tkinter for simple GUI and messaging/interfacing?

## Windows 10
-------------
* MinGW64, Ninja.  See [Setup Instructions](./source/docs/SetupInstructions.md)
* [Windows Core Audio APIs](https://docs.microsoft.com/en-us/windows/win32/coreaudio/core-audio-apis-in-windows-vista)

## Linux
--------
* TBD

## [License](./LICENSE)
-----------------------
This work is licensed under the terms of the MIT license.
For a copy, see <https://opensource.org/licenses/MIT>.
