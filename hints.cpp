#include <iostream>

using namespace std;

int main(void)
{

    double a = 2.2;

    // EN: check variable type PL: sprawdzanie typu zmiennej
    cout << typeid((float)a).name() << endl;
    // f

    return 0;
}