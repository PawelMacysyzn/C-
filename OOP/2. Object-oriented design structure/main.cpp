#include <iostream>
#include "pytanie.cpp" // na vsc

// #include "pytanie.h" // wtedy trzeba uruchomic w cmd
// // w katalogu wpisać  g++ -o main.cpp pytanie.cpp pytanie.h
// // uruchomić main.exe

using namespace std;

int main()
{

    Pytanie p[5];
    int suma = 0;
    // for (int i = 0; i <= 4; i++)
    for (int i = 0; i <= 1; i++)
    {
        p[i].nr_pytania = i + 1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma += p[i].punkt;
    }

    cout << "KONIEC QUIZU! PUNKTY = " << suma;

    return 0;
}