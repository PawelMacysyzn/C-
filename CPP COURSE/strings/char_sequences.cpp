#include <iostream>

using namespace std;

int main()
{
    char ciag_1[] = "Hello";
    char ciag_2[9] = "Hello";

    cout << ciag_1 << " <size: " << sizeof(ciag_1) << ">" << endl;
    // Hello <size: 6>
    cout << ciag_2 << " <size: " << sizeof(ciag_2) << ">" << endl;
    // Hello <size: 9>

    cout << "-----------------------------------" << endl;

    for (auto &elem : ciag_1) // for each
    {
        cout << "'" << (int)elem << "'"
             << " ";
    }
    cout << endl;
    // '72' '101' '108' '108' '111' '0'

    cout << "-----------------------------------" << endl;

    for (auto &elem : ciag_2) // for each
    {
        cout << "'" << (int)elem << "'"
             << " ";
    }
    cout << endl;
    // '72' '101' '108' '108' '111' '0' '0' '0' '0'

    cout << "-----------------------------------" << endl;

    // char imie[4] = "Adam";   // ZLE bo ostatni znak to "\0"
    char imie[5] = "Adam"; // imie[5] bo ostatni znak to "\0"
    cout << imie << endl;
    // Adam

    char imie[5] = "Adam";

    cout << "-----------------------------------" << endl;

    return 0;
}