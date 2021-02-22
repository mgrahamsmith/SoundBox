# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(SoundBox LANGUAGES CXX)

add_executable(play play.cpp)

target_compile_definitions(play PUBLIC "COMPILER_NAME=\"${CMAKE_CXX_COMPILER_ID}\"" )

if(CMAKE_CXX_COMPILER_ID MATCHES MSVC)
    target_compile_definitions(play PUBLIC "IS_MSVC_CXX_COMPILER") 
elseif(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    target_compile_definitions(play PUBLIC "IS_GNU_CXX_COMPILER")
elseif(CMAKE_CXX_COMPILER_ID MATCHES AppleClang)
    target_compile_definitions(play PUBLIC "IS_APPLE_CLANG_CXX_COMPILER")
endif()
