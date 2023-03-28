// Dynamiczne alokowanie pamieci

#include <iostream>

using namespace std;

void example_1()
{
    int *ptr = nullptr;
    cout << ptr << endl;
    // 0

    ptr = new int;
    cout << ptr << endl;
    // 0x1b11fa56c70
}

void example_2()
{
    float *ptr = new float[3];

    cout << &ptr << endl;
    // 0x3bda9ff948
    cout << sizeof(float) << endl;
    // 4 (bytes)

    cout << &ptr[0] << endl;
    // 0x1c2a2056c70
    cout << &ptr[1] << endl;
    // 0x1c2a2056c74
    cout << &ptr[2] << endl;
    // 0x1c2a2056c78
}

void example_3()
{
    string *imie = new string[3];
    imie[0] = "Tomek";
    imie[1] = "Maciek";
    imie[2] = "Patryk";

    cout << &imie[0] << " " << imie[0] << endl;
    // 0x2d68e656f18 Tomek
    cout << &imie[1] << " " << imie[1] << endl;
    // 0x2d68e656f38 Maciek
    cout << &imie[2] << " " << imie[2] << endl;
    // 0x2d68e656f58 Patryk

    cout << imie << endl;
    // 0x19a0cdd6f18
    cout << *imie << endl;
    // Tomek

    delete[] imie;

    cout << imie << endl;
    // 0x19a0cdd6f18
    cout << *imie << endl;
    // ►oŢ♀Ü
}

int main()
{
    // example_1();
    // example_2();
    // example_3();

    return 0;
}