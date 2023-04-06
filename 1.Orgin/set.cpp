#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    // set<string> names = {"Pawel", "Mariusz", "Kamil", "Dominik", "Pawel", "Adam"};
    
    set<string> names;
    names = {"Pawel", "Mariusz", "Kamil", "Dominik", "Pawel", "Adam"};

    for (string name : names)
        cout << name << " ";
    cout << endl;

    // Adam Dominik Kamil Mariusz Pawel

    
    names.insert("Harry");

    for (string name : names)
        cout << name << " ";
    cout << endl;

    // Adam Dominik Harry Kamil Mariusz Pawel 


    /*names.clear();

    for (string name : names)
        cout << name << " ";
    cout << endl;

    // none */


    names.erase("Pawel");

    for (string name : names)
        cout << name << " ";
    cout << endl;

    // Adam Dominik Harry Kamil Mariusz

}