#include <iostream>
#include "utils.h"
#include "types.h"

bool file_io(IOUtils utils, const std::string file_path)
{
    IORet ret;
    bool success = false;
    std::cout << "[+] Performing file IO..." << std::endl;

    utils.set_target_file(file_path);
    ret = utils.read_file_bytes();
}

int main()
{
    std::cout << "XOR Encrypter running..." << std::endl;
    const std::string target = "C:\\Users\\cdecl\\Projects\\XORCoder\\build\\sample.exe";

    IOUtils utils;
    bool success = file_io(utils, target);

    return 0;
}