#include <iostream>
#include "args_operations.h"

int main(int argc, char **argv)
{
    std::vector<std::string> arg_of_main;

    add_args_to_vector(arg_of_main, argc, argv);
    show_args(arg_of_main);
    return 0;
}
