#include <iostream>

using namespace std;

int main()
{
    string names[] = {"Pawel", "Mariusz", "Kamil"};

    for (string name : names) // for each 
    {
        cout << name << endl;
    }

    // cout << names[0] << endl;
    // Pawel
}