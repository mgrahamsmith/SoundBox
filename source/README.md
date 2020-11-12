# Primary Source Tree
This is the primary source code for the project.

## Building and Running

### To Build
1. From [SoundBox\source](../source):
    `> md _build`
    `> cd _build`
    `> cmake ..`

    Expected output:
    ```
    SoundBox\source\_build>cmake ..
    -- Building for: Visual Studio 16 2019
    -- Selecting Windows SDK version 10.0.18362.0 to target Windows 10.0.18363.
    -- The CXX compiler identification is MSVC 19.27.29111.0
    -- Detecting CXX compiler ABI info
    -- Detecting CXX compiler ABI info - done
    -- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.27.29110/bin/Hostx64/x64/cl.exe - skipped
    -- Detecting CXX compile features
    -- Detecting CXX compile features - done
    -- Configuring done
    -- Generating done
    -- Build files have been written to: D:/repos/SoundBox/source/_build
    ```

2. Open `SoundBox\source\_build\SoundBox.sln` in Visual Studio.

3. Right-click `All_BUILD`, and select 'Build'.

## Running
From `SoundBox\source\_build`, run `play.exe`.

## License
This work is licensed under the terms of the MIT license.
For a copy, see <https://opensource.org/licenses/MIT>.