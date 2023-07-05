#include "args_operations.h"
#include <iostream>

void show_args(int argc, char **argv)
{
    std::cout << "Program options:" << std::endl;

    // 1. argv[0]
    // 2. argv[1]
    // ...

    // for (auto& arg : (argv))
    int tab[] = {1, 2, 3, 4};
    // for (int i : tab) {
    for (auto it = std::begin(tab); it != std::end(tab); ++it)
    {
        std::cout << *it << ",";
    }
    std::cout << std::endl;
}
