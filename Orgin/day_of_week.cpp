#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string dayOfWeek;
    cout << "Podaj dzien tygodnia" << endl;
    cin >> dayOfWeek;

    for (int i = 0; i < dayOfWeek.length(); i++)
        dayOfWeek[i] = toupper(dayOfWeek[i]);
    

    if (dayOfWeek == "PONIEDZIALEK" || dayOfWeek == "WTOREK" || dayOfWeek == "SRODA")
        cout << "Jescze kilka dni" << endl;
    else if (dayOfWeek == "CZWARTEK")
        cout << "Maly piatek" << endl;
    else if (dayOfWeek == "PIATEK")
        cout << "Juz za moment" << endl;
    else if (dayOfWeek == "SOBOTA" || dayOfWeek == "NIEDZIELA")
        cout << "Weekend!" << endl;
    else
        cout << "Error.." << endl;

    return 0;
}