// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include <cstdlib>
#include <iostream>
#include <string>

std::string play_sound() { 
#ifdef IS_MSVC_CXX_COMPILER
	return std::string("Let's play a sound on Windows!"); 
#elif IS_GNU_CXX_COMPILER
	return std::string("Let's play a sound on Linux!");
#elif IS_APPLE_CLANG_CXX_COMPILER
	return std::string("Let's play a sound on MacOS!") // <- Cause compiler error to test CI.
#else
	return std::string("Attempting to play sound on unknown platform.");
#endif
}

int main()
{
    std::cout << play_sound() << std::endl;
	std::cout << "compiler name is " COMPILER_NAME << std::endl;
    return 0;
}
