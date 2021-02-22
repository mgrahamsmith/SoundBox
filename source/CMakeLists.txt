# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

add_executable(play play.cpp)

target_compile_definitions(play PUBLIC "COMPILER_NAME=\"${CMAKE_CXX_COMPILER_ID}\"" )

message("CMAKE_SYSTEM_NAME=${CMAKE_SYSTEM_NAME}")
message("CMAKE_CXX_COMPILER_ID=${CMAKE_CXX_COMPILER_ID}")

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    message(STATUS "Configuring on Windows")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message(STATUS "Configuring on Linux")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    message(STATUS "Configuring on MacOS")
endif()


if(CMAKE_CXX_COMPILER_ID MATCHES MSVC)
    target_compile_definitions(play PUBLIC "IS_MSVC_CXX_COMPILER") 
elseif(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    target_compile_definitions(play PUBLIC "IS_GNU_CXX_COMPILER")
elseif(CMAKE_CXX_COMPILER_ID MATCHES AppleClang)
    target_compile_definitions(play PUBLIC "IS_APPLE_CLANG_CXX_COMPILER")
endif()
