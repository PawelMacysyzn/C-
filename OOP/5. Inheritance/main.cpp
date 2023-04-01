#include <iostream>
#define M_PI 3.14159265358979323846

// Nie dziedziczymy:
// - konstruktora
// - destruktora
// - operator przypisania

using namespace std;

class Punkt
{
    float x, y;
    string nazwa;

public:
    void wyswietl()
    {
        cout << nazwa << "(" << x << "," << y << ")" << endl;
    }

    Punkt(string n = "S", float a = 0, float b = 0)
    {
        nazwa = n;
        x = a;
        y = b;
    }
};

class Kolo : public Punkt
{
    float r;
    string nazwa; // przesloniecie nazwy z klasy Punkt

public:
    void wyswietl() // przesloniecie metody z klasy Punkt
    {
        cout << "Kolo o nazwie: " << nazwa << endl;
        cout << "Srodek kola: " << endl;
        Punkt::wyswietl(); // wywolanie metody wyswietl z klasy Punkt
        cout << "Promien kola: " << r << endl;
        cout << "Pole kola: " << M_PI * r * r << endl;
    }

    Kolo(string nk = "Kolko", string np = "S", float a = 0, float b = 0, float pr = 1)
        : Punkt(np, a, b) // używamy konstruktor wewnątrz innego konstruktora, nie dziedziczymy go
    {
        nazwa = nk;
        r = pr;
    }
};

int main()
{
    Kolo k1; // Nie tworzy obiektu klasy punkt
    k1.wyswietl();
    // Kolo o nazwie: Kolko
    // Srodek kola:
    // S(0,0)
    // Promien kola: 1
    // Pole kola: 3.14159

    return 0;
}
