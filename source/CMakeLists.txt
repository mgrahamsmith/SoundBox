# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
set(CMAKE_C_COMPILER "/mingw/bin/gcc")
set(CMAKE_CXX_COMPILER "/mingw/bin/g++")

project(SoundBox LANGUAGES CXX)

add_executable(play play.cpp)