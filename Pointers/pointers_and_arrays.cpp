#include <iostream>

using namespace std;

void example_1()
{
    int number[] = {23, 34, 23};

    cout << number[0] << endl;
    // 23
    cout << number << endl;
    // 0x91ac5ffc34  // adres pierwszego elemntu w tablicy
    cout << *number << endl;
    // 23

    cout << &number << endl; // number == &number
    // 0x91ac5ffc34

    int *number_ptr = number; // nie!    &number;

    cout << number_ptr << endl; // number == &number == number_ptr
    // 0x91ac5ffc34

    cout << *number_ptr << endl;
    // 23

    cout << &number_ptr << endl; // Adres wskazniak
    // 0x91ac5ffc28
}

void example_2()
{
    float number[] = {42, 50, 43, 21};

    float *number_ptr = number;

    cout << number_ptr << " " << *number_ptr << endl;
    // 0xc6029ff940 42
    cout << (number_ptr + 1) << " " << *(number_ptr + 1) << endl;
    // 0xc6029ff944 50
    cout << (number_ptr + 2) << " " << *(number_ptr + 2) << endl;
    // 0xc6029ff948 43
    cout << (number_ptr + 3) << " " << *(number_ptr + 3) << endl;
    // 0xc6029ff94c 21
}

int main()
{
    // example_1();
    // example_2();
    return 0;
}