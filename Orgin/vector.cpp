#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // vector<string> names = {"Pawel"};
    vector<string> names;

    names.push_back("Pawel");
    names.push_back("Mariusz");
    names.push_back("Kamil");

    // cout << names[1] << endl;
    // cout << names.at(1) << endl;
    // Mariusz

    for (string name : names)
    {
        cout << name << endl;
    }
    // Pawel
    // Mariusz
    // Kamil

    /*sort(names.begin(), names.end()); // alhorithm

    for (string name : names)
        cout << name << " ";
    // Kamil Mariusz Pawel*/

    names.at(1) = "Harry";
    for (string name : names)
        cout << name << " ";
    cout << endl;
    // Pawel Harry Kamil

    names.pop_back();
    for (string name : names)
        cout << name << " ";
    cout << endl;
    // Pawel Harry

    /*names.clear();
    for (string name : names)
        cout << name << " ";
    cout << endl;
    // none*/

    names.erase(names.begin()); // "Pawel" => names[0]
    for (string name : names)
        cout << name << " ";
    cout << endl;
    // Harry

}