#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    // 4
    // 4   
    
    b = 6;

    cout << a << endl;
    cout << b << endl;

    // 6
    // 6   
    
}