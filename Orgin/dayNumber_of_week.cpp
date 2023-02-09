#include <iostream>

using namespace std;

int main()
{
    int dayOfWeek;
    cout << "Podaj dzien tygodnia" << endl;
    cin >> dayOfWeek;

    switch (dayOfWeek)    {
        case 1:
        case 2:
        case 3:
            cout << "Jescze kilka dni" << endl;
            break;
        case 4:
            cout << "Maly piatek" << endl;
            break;
        case 5:
            cout << "Juz za moment" << endl;
            break;
        case 6:
        case 7:
            cout << "Weekend!" << endl;
            break;
        default:
            cout << "Error.." << endl;
            break;
    }
}