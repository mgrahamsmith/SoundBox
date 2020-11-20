# Alternate Build Instructions
Issues with previous `virtualenv` in MSYS2 caused issues.  Starting with a fresh MSYS2 install...

## Pre-req Steps
1.  Uninstall and reinstall MSYS2 64 bit.
    Note: Immediately after stall, `python` gives  
    `bash: python: command not found`

1.  Install git: `$ pacman -S git`  
    `git version 2.27.0`

1.  Install CMake: `$ pacman -S mingw64/mingw-w64-x86_64-cmake`  
    `cmake version 3.17.3`

1.  Install Gnu compiler toolchain: `$ pacman -S mingw64/mingw-w64-x86_64-toolchain`  
    ```
    gcc.exe (Rev1, Built by MSYS2 project) 10.2.0
    Copyright (C) 2020 Free Software Foundation, Inc.
    This is free software; see the source for copying conditions.  There is NO
    warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    ```
    NOTE: installs gcc/g++, not clang.

5.  Install Ninja: `$ pacman -S mingw64/mingw-w64-x86_64-ninja`  
    `1.10.1`

1.  Install Python: `$ pacman -S mingw64/mingw-w64-x86_64-python3`  
    `Python 3.8.5`

1.  Install pip: `$ pacman -S mingw64/mingw-w64-x86_64-python3-pip`  
    `pip` not working... but the folllowing works:
    ```
    $ python -m pip --version
    $ pip 20.2.4 from C:/Users/<uname>/.local/lib/python3.8/site-packages/pip (python 3.8)
    ```
    Could be that during install, result output contains:  
    ```
    ...
    (25/25) checking for file conflicts                                                                  [###########################################################] 100%
    error: failed to commit transaction (conflicting files)
    ```

1.  `$ python3 -m pip install pipenv`

1.  Use Pipenv to generate an isolated environment.  
    `$ pip install --user pip pipenv --upgrade`  
    Result: `bash: pip: command not found`  
    Skipping... 

10.  `pipenv install --python python3.5`  
    Result:
    ```
    Warning: Python python3.5 was not found on your system...
    Neither 'pyenv' nor 'asdf' could be found to install Python.
    You can specify specific versions of Python with:
    $ pipenv --python path/to/python
    ```
    Skipping...


## Build Instructions:
1. Create _build folder and generate build files.
    ```
    $ mkdir -p _build
    $ cd _build
    $ cmake ..
    ```
    Result:
    ```
    -- Building for: Visual Studio 16 2019
    -- Selecting Windows SDK version 10.0.18362.0 to target Windows 10.0.18363.
    -- The CXX compiler identification is MSVC 19.28.29333.0
    -- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.28.29333/bin/Hostx64/x64/cl.exe
    -- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.28.29333/bin/Hostx64/x64/cl.exe - works
    -- Detecting CXX compiler ABI info
    -- Detecting CXX compiler ABI info - done
    -- Detecting CXX compile features
    -- Detecting CXX compile features - done
    -- Configuring done
    -- Generating done
    -- Build files have been written to: D:/repos/SoundBox/source/_build
    ```

    NOTE: not finding Gcc, but MSVC automatically....

    Info: `cmake --help` produces:
    ```
    ...
    Generators

    The following generators are available on this platform (* marks default):
    * Visual Studio 16 2019        = Generates Visual Studio 2019 project files.
                                    Use -A option to specify architecture.
    Visual Studio 15 2017 [arch] = Generates Visual Studio 2017 project files.
    ...
    ```

    Notice VS 2019 set as default.