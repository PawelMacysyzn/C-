#include <iostream>
#include <cstring>

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

    cout << "-----------------------------------" << endl;

    // Copy char sequences
    char owoc_1[20], owoc_2[30];

    cout << "Podaj owoc_1: ";
    cin >> owoc_1;

    cout << "Podaj owoc_2: ";
    cin >> owoc_2;

    cout << owoc_1 << " : " << sizeof(owoc_1) << endl
         << owoc_2 << " : " << sizeof(owoc_2) << endl;
    // Banan : 20
    // Rabarbar : 30

    strcpy(owoc_1, owoc_2); //PL: Kopiowanie ciągu znaków do innego // EN: Copy string to another string
    cout << owoc_1 << " : " << sizeof(owoc_1) << endl
         << owoc_2 << " : " << sizeof(owoc_2) << endl;
    // Rabarbar : 20
    // Rabarbar : 30

    cout << "-----------------------------------" << endl;

    char data_user[40];
    strcpy(data_user, "John");
    strcat(data_user, " Wick"); //PL: Dodawanie ciągu znaków do innego // EN: Adding string to another string
    cout << data_user << endl;
    // John Wick

    return 0;
}