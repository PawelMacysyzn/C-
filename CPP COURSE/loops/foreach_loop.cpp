#include <iostream>

using namespace std;

// Petla oparta na zakresie

int main()
{
    int oceny[] = {4, 5, 2, 3, 3};

    for (auto ocena : oceny)
    {
        cout << ocena << endl;
    }
    // 4
    // 5
    // 2
    // 3    
    // 3

    return 0;
}