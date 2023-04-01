#include <iostream>
#include "pytanie.h"

#include <fstream> // A combination of ofstream and ifstream: creates, reads, and writes to files

#include <cstdlib>
#include <string>

using namespace std;

void Pytanie::wczytaj()
{
    fstream MyFile;
    MyFile.open("quiz.txt", ios::in);

    if (MyFile.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku!";
        exit(0);
    }

    int nr_linii = (nr_pytania - 1) * 6 + 1;
    int aktualny_nr = 1;
    string linia;

    while (getline(MyFile, linia))
    {
        if (aktualny_nr == nr_linii)
            tresc = linia;
        if (aktualny_nr == nr_linii + 1)
            a = linia;
        if (aktualny_nr == nr_linii + 2)
            b = linia;
        if (aktualny_nr == nr_linii + 3)
            c = linia;
        if (aktualny_nr == nr_linii + 4)
            d = linia;
        if (aktualny_nr == nr_linii + 5)
            poprawna = linia;
        aktualny_nr++;
    }

    MyFile.close();
}

void Pytanie::zadaj()
{
    cout << endl
         << tresc << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << "------------------------" << endl;
    cout << endl
         << "Odpowiedz: ";
    cin >> odpowiedz;
}

string string_to_lower(string str)
{
    string to_return;
    for (auto elem : str)
        to_return.push_back(tolower(elem));
    return to_return;
}

void Pytanie::sprawdz()
{
    if (string_to_lower(odpowiedz) == poprawna)
    {
        punkt = 1;
    }
    else
        punkt = 0;
}