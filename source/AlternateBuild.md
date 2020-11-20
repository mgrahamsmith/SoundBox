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

1.  `pipenv install --python python3.5`  
    Result:
    ```
    Warning: Python python3.5 was not found on your system...
    Neither 'pyenv' nor 'asdf' could be found to install Python.
    You can specify specific versions of Python with:
    $ pipenv --python path/to/python
    ```
    Skipping...

11. Needed to install `make` separately, otherwise the generator kept defaulting 
    to Visual Studio.  The toolchain should have taken care of this in step 4.
    Install make: `$ pacman -S make`  
    ```
    $ make --version
    GNU Make 4.3
    Built for x86_64-pc-msys
    Copyright (C) 1988-2020 Free Software Foundation, Inc.
    License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
    This is free software: you are free to change and redistribute it.
    There is NO WARRANTY, to the extent permitted by law.
    ```



## Build Instructions:
1.  From `source` dir, run: `$ ./build.sh`


## To Run:
1.  From `_build` dir, run: `$ ./play.exe`