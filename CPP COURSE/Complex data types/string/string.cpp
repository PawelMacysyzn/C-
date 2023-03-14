#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text_1 = "Test test";
    cout << text_1 << endl;
    // Test test

    cout << "-----------------------------------" << endl;

    // PL: KONKATENACJA, Eng: CONCATENATION

    string name = "Jan", surname = "Kowalski", data_users;
    data_users = name + " " + surname;
    cout << data_users << endl;
    // Jan Kowalski

    cout << "-----------------------------------" << endl;

    int liczba_1 = 5, liczba_2 = 10, wynik_1;
    string ciag_1 = "5", ciag_2 = "10", wynik_2;
    wynik_1 = liczba_1 + liczba_2; // (int)15
    wynik_2 = ciag_1 + ciag_2;     // (str)510
    cout << wynik_1 << endl
         << wynik_2 << endl;
    // 15
    // 510

    cout << "-----------------------------------" << endl;

    string text_3 = "Some text .. in text ..";
    char s_text[] = "Some text .. in text ..";
    cout << text_3.size() << endl;
    // 23
    cout << size(text_3) << endl;
    // 23
    cout << size(s_text) << endl;
    // 24
    cout << size((string)s_text) << endl;
    // 23

    cout << "-----------------------------------" << endl;

    string text_2 = "Some text .. in text ..";
    cout << text_2[7] << endl;
    // x

    cout << "-----------------------------------" << endl;

    string imie = "Name", nazwisko = "Surname";
    cout << imie << " " << nazwisko << endl;
    // Name Surname
    cout << imie + " " + nazwisko << endl;
    // Name Surname

    cout << "-----------------------------------" << endl;

    // PL: Wypisuje ten sam znak podana ilosc razy
    string separator(15, '*');
    cout << separator << endl;
    // ***************

    cout << "-----------------------------------" << endl;

    string s1 = "Python", s2 = "C++";
    cout << (s1 == s2) << endl;
    // 0
    cout << (s1.replace(s1.begin(), s1.end(), "C++") == s2) << endl;
    // 1

    cout << "-----------------------------------" << endl;

    string s_string = "Programowanie w C++";
    cout << s_string.substr(0, 13) << endl;
    // Programowanie

    string szukany = "C++";
    cout << s_string.find(szukany) << " : " << s_string.find(szukany) + size(szukany) << endl;
    // 16 : 19
    cout << s_string.substr(s_string.find(szukany), s_string.find(szukany) + size(szukany)) << endl;
    // c++

    cout << s_string.substr(s_string.find(szukany)) << endl; // szukany = "w"
    // wanie w C++

    cout << "-----------------------------------" << endl;

    string x;
    getline(cin, x, '$'); //     #include <string>
    cout << x << endl;
    // >> a\n >> b\n >>c\\n >> $\n
    // a
    // b
    // c
    // \n

    cout << "-----------------------------------" << endl;

    return 0;
}