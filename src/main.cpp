#include <iostream>
#include "utils.h"

int main()
{
    std::cout << "Hello World" << std::endl;
    IOUtils utils;

    std::string target = "C:\\Users\\cdecl\\Projects\\XORCoder\\build\\sample.exe";
    utils.set_target_file(target);
    std::cout << utils.get_target_file() << std::endl;

    return 0;
}