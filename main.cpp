#include "lib.h"

#include <iostream>

int main (int, char **)
{
    std::cout << "Hello word!" << std::endl;
    std::cout << "Version: " << version() << std::endl;

    return 0;
}
