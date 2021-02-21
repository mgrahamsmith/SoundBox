# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(SoundBox LANGUAGES CXX)

message( WARNING "${CMAKE_CXX_COMPILER_ID}" )

add_executable(play play.cpp)
