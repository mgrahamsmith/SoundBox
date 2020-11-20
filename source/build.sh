#!/bin/bash
# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

# MinGW Build Script

BUILD_DIR="_build"
SOURCE_DIR=.
CMAKE_GENERATOR="MinGW Makefiles"

if [ ! d ${BUILD_DIR} ]
then
    mkdir ${BUILD_DIR}
fi

cmake -G "${CMAKE_GENERATOR}" -H${SOURCE_DIR} -B${BUILD_DIR}
cmake --build ${BUILD_DIR}