#include "utils.h"

IOUtils::IOUtils()
{

}

const std::string IOUtils::get_target_file()
{
    return target_file;
}

void IOUtils::set_target_file(const std::string filepath)
{
    target_file = filepath;
}

IORet IOUtils::read_file_bytes()
{
    std::cout << "[+] Reading target file..." << std::endl;
    std::cout << target_file << std::endl;

    IORet ret;
    std::ifstream file(target_file, std::ios::binary | std::ios::ate); //ate means "at end" for cursor position (to determine file size)

    if (!file.is_open())
    {
        std::cerr << "[!] Error opening target file..." << std::endl;
        ret.success = false;
        return ret;
    }

    return ret;
}