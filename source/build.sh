#!/bin/bash
# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

# MinGW Build Script

mkdir _build
cd _build
cmake .. -G "MinGW Makefiles"
cmake --build .