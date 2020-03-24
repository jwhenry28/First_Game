#include "Utils.h"

void string_tolower(std::string &str)
{
    std::for_each(str.begin(), str.end(), [](char &c)
    {
        c = ::tolower(c);
    });
}