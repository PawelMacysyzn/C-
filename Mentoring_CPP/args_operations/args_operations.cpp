#include "args_operations.h"

void add_args_to_vector(std::vector<std::string> &arg_of_main, int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        // std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
        arg_of_main.push_back(argv[i]);
    }
}

void show_args(std::vector<std::string> arg_of_main)
{
    std::cout << "Program options:" << std::endl;

    // 1. argv[0]
    // 2. argv[1]
    // ...

    //
    int num = 1;
    for (const std::string &elem : arg_of_main)
    {
        std::cout << "argv[" << num << "] = " << elem << std::endl;
        num++;
    }

    std::cout << std::endl;
}
