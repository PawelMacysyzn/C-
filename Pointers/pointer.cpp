#include <iostream>

using namespace std;

int main()
{
    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << endl;
    // Pizza

    // Output the memory address of food (0x6dfed4)
    cout << &food << endl;
    // 0x29297ffac0

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << endl;
    // 0x29297ffac0

    // Output the value of food (Pizza)
    cout << *ptr << endl;
    // Pizza

    // Output the memory address of ptr
    cout << &ptr << endl;
    // 0x29297ffab8

    //---------------------------------------------------------------------------------------------------

    cout << sizeof(ptr) << endl;
    // 8

    cout << sizeof(&ptr) << endl;
    // 8

    cout << sizeof(*ptr) << endl;
    // 32

    cout << sizeof(food) << endl;
    // 32

    //---------------------------------------------------------------------------------------------------

    ptr = nullptr;
    cout << ptr << endl;
    // 0

    //---------------------------------------------------------------------------------------------------

    return 0;
}