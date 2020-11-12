// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include <cstdlib>
#include <iostream>
#include <string>

std::string play_sound() { return std::string("Let's play a sound!"); }

int main()
{
    std::cout << play_sound() << std::endl;
    return 0;
}