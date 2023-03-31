#include <iostream>

using namespace std;

/***********************************************************/
/*
int main(void)
{

    double a = 2.2;

    // EN: check variable type PL: sprawdzanie typu zmiennej
    cout << typeid((float)a).name() << endl;
    // f
    return 0;
}

/***********************************************************/

/*int var = 10;

int main(void)
{

    int var = 20;


    cout << var << endl;
    // 20
    // Dostep do zmiennej globalnej
    cout << ::var << endl;
    // 10

    return 0;
}*/

/***********************************************************/

/*int main(void)
{

    signed int int1 = 20;
    // Rozmiar zmiennej w bait -ach
    cout << sizeof(int1) << endl;
    // 4

    long long int var1 = 14;
    cout << sizeof(var1) << endl;
    // 8

    long int var2 = 14;
    cout << sizeof(var1) << endl;
    // 8

    unsigned char char1 = 'z';
    cout << sizeof(char1) << endl;
    // 1

    long double double1;
    cout << sizeof(double1) << endl;
    // 16

    return 0;
}*/

/***********************************************************/
/*
#define CONST 50

int main()
{

    cout << sizeof(CONST) << endl;
    // 4
    cout << CONST << endl;
    // 50
    return 0;
}

/***********************************************************/
/*
int main()
{
    char ciag_1[] = "Hello";
    char ciag_2[9] = "Hello";

    cout << ciag_1 << " <size: " << sizeof(ciag_1) << ">" << endl;
    // Hello <size: 6>
    cout << ciag_2 << " <size: " << sizeof(ciag_2) << ">" << endl;
    // Hello <size: 9>

    return 0;
}

// /***********************************************************/

// int main()
// {
//     // PL: Wypisuje ten sam znak podana ilosc razy
//     string separator(50, '*');
//     cout << separator << endl;
//     // **************************************************

//     return 0;
// }

// /***********************************************************/

// /***********************************************************/

string string_to_lower(string str)
{
    string to_return;
    for (auto elem : str)
        to_return.push_back(tolower(elem));
    return to_return;
}

string string_to_upper(string str)
{
    string to_return;
    for (auto elem : str)
        to_return.push_back(toupper(elem));
    return to_return;
}

void example_of_to_upper_and_to_lower()
{
    string s1 = "Example of usage String";
    cout << string_to_lower(s1) << endl;
    // example of usage string
    cout << string_to_upper(s1) << endl;
    // EXAMPLE OF USAGE STRING
}

// /***********************************************************/

int main()
{
    example_of_to_upper_and_to_lower();
    return 0;
}