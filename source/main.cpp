///
/// This file is part of the SoundBox Project.
/// Author: Graham Smith
///
/// This work is licensed under the terms of the MIT license.
/// For a copy, see <https://opensource.org/licenses/MIT>.
///

#include <cstdlib>
#include <iostream>

#include "sounds.hpp"

int main()
{
    std::cout << play_sound() << std::endl;
	std::cout << "compiler name is " COMPILER_NAME << std::endl;

    std::cout << getAudioDevice() << std::endl;

    return 0;
}
