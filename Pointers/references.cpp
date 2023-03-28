#include <iostream>

using namespace std;

void exmaple_1()
{
    string imie = "Tomasz";
    string &ref = imie;

    cout << imie << endl;
    // Tomasz
    cout << ref << endl;
    // Tomasz

    imie = "Kuba";
    cout << imie << endl;
    // Kuba
    cout << ref << endl;
    // Kuba
}

int main()
{
    exmaple_1();
    return 0;
}