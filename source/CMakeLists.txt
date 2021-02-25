# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

set(app_target play)

add_executable(${app_target}
    main.cpp
    sounds.cpp
    )

target_compile_definitions(${app_target} PUBLIC "COMPILER_NAME=\"${CMAKE_CXX_COMPILER_ID}\"" )

target_include_directories(${app_target}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
    )

message(STATUS "CMAKE_SYSTEM_NAME=${CMAKE_SYSTEM_NAME}")
message(STATUS "CMAKE_CXX_COMPILER_ID=${CMAKE_CXX_COMPILER_ID}")

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    message(STATUS "Configuring on Windows")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message(STATUS "Configuring on Linux")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    message(STATUS "Configuring on MacOS")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES MSVC)
    target_compile_definitions(${app_target} PUBLIC "IS_MSVC_CXX_COMPILER") 
elseif(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    target_compile_definitions(${app_target} PUBLIC "IS_GNU_CXX_COMPILER")
elseif(CMAKE_CXX_COMPILER_ID MATCHES AppleClang)
    target_compile_definitions(${app_target} PUBLIC "IS_APPLE_CLANG_CXX_COMPILER")
endif()
