##
## This file is part of the SoundBox Project.
## Author: Graham Smith
##
## This work is licensed under the terms of the MIT license.
## For a copy, see <https://opensource.org/licenses/MIT>.
##

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(SoundBox LANGUAGES CXX)

option(BuildWinSample "Build the windows sample." OFF )

add_subdirectory(source)

<<<<<<< HEAD
if(CMAKE_CXX_COMPILER_ID MATCHES MSVC)
=======
if(CMAKE_CXX_COMPILER_ID MATCHES MSVC AND BuildWinSample)
>>>>>>> develop/noise_1
    add_subdirectory(win_samples)
endif()