// std::fixed, std::scientific, std::hexfloat, std::defaultfloat

#include <iostream>
#include <iomanip> // setprecision

using namespace std;

void example_default(float a, float b, float c)
{
    cout << "default:\n";  // defaultfloat aby przywrócić domyślne ustawienia
    cout << a << endl
         << b << endl
         << c << endl;

    // default:
    // 4.58977
    // 3
    // 1e-09
}

// ENG: Fixed-point arithmetic   PL: Arytmetyka stałoprzecinkowa
void example_fixed(float a, float b, float c)
{
    cout << "fixed:\n";
    cout << fixed;
    cout << a << endl
         << b << endl
         << c << endl;

    // fixed:
    // 4.589769
    // 3.000000
    // 0.000000
}
void example_scientific(float a, float b, float c)
{
    cout << "scientific:\n";
    cout << scientific;
    cout << a << endl
         << b << endl
         << c << endl;

    // scientific:
    // 4.589769e+00
    // 3.000000e+00
    // 1.000000e-09
}

void example_hexfloat(float a, float b, float c)
{
    cout << "hexfloat:\n";
    cout << hexfloat;
    cout << a << endl
         << b << endl
         << c << endl;

    // hexfloat:
    // 0x9.2df63p-1
    // 0xcp-2
    // 0x8.9705fp-33
}

void example_defaultfloat(float a, float b, float c)
{
    cout << "defaultfloat :\n";
    cout << defaultfloat;
    cout << a << endl
         << b << endl
         << c << endl;

    // defaultfloat :
    // 4.58977
    // 3
    // 1e-09
}

int main()
{
    float a = 4.589768896;
    float b = 3;
    float c = 1.0e-9;

    /*
    // Wipisuje 2 miejsca po przecinku // print cout

    cout << fixed << setprecision(2) << a << endl;
    // 4.59
    cout << fixed << setprecision(3) << a << endl;
    // 4.590
    cout << fixed << b << endl;
    // 3.000
    cout << fixed << setprecision(2) << c << endl;
    // 0.00
    cout << fixed << b << endl;
    // 3.00

    //  setprecision(3) == cout.precision(3)

    cout.precision(5);
    cout << fixed << c << endl;
    // 0.00000
    */

    // -------------------------------------------------------------
    cout.precision(6); // //  cout << setprecision(6);
    example_default(a, b, c);
    example_fixed(a, b, c);
    example_scientific(a, b, c);
    // example_default(a, b, c);    // Nie zadziała po !!!    cout << scientific;
    example_defaultfloat(a, b, c);  // Trzeba przywrócic      cout << defaultfloat;
    example_hexfloat(a, b, c);

    // -------------------------------------------------------------

    return 0;
}