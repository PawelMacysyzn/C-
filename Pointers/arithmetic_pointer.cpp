#include <iostream>

using namespace std;

void example_1()
{
    int number_1 = 4, number_2 = 6;
    int *ptr_1 = nullptr, *ptr_2 = nullptr;

    ptr_1 = &number_1;
    ptr_2 = &number_2;

    // Pre-inkrementacja na wskaznikach
    cout << *ptr_1 << " " << ptr_1 << " " << ++ptr_1 << endl;
    // 4 0x6ccdbffc6c 0x6ccdbffc70
    cout << *ptr_2 << " " << ptr_2 << " " << ++ptr_2 << endl;
    // 6 0x6ccdbffc68 0x6ccdbffc6c
}

void example_2()
{
    int liczba_1 = 5, liczba_2 = 10;
    int *ptr_1 = &liczba_1;
    int *ptr_2 = &liczba_1;
    int *ptr_3 = &liczba_2;

    cout << (ptr_1 == ptr_2) << endl;
    // 1
    cout << (ptr_1 == ptr_3) << endl;
    // 0
}

int main()
{
    // example_1();
    // example_2();
    return 0;
}