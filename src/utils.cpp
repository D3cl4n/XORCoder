#include "utils.h"

IOUtils::IOUtils()
{

}

std::string IOUtils::get_target_file()
{
    return target_file;
}

void IOUtils::set_target_file(std::string filepath)
{
    target_file = filepath;
}

std::vector<uint8_t> IOUtils::read_file_bytes()
{
    std::cout << "[+] Reading target file..." << std::endl;
    return std::vector<uint8_t>();
}