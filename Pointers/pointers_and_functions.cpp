#include <iostream>

using namespace std;

void dodawanie(int *ptr)
{
    *ptr += 5;
}

void exmaple_1()
{
    int liczba = 5;
    cout << liczba << endl;
    // 5
    dodawanie(&liczba);
    cout << liczba << endl;
    // 10

    int *ptr = &liczba;
    dodawanie(ptr);
    cout << liczba << endl;
    // 15
}

int main()
{
    exmaple_1();
    return 0;
}