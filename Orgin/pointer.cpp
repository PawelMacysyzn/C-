#include <iostream>

using namespace std;

int main()
{
    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << endl;

    // Output the memory address of food (0x6dfed4)
    cout << &food << endl;

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << endl;

    // Output the value of food (Pizza)
    cout << *ptr << endl;
    
    // Output the memory address of ptr
    cout << &ptr << endl;

    return 0;
}