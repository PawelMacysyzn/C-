#include <iostream>
#include <cstdio>

using namespace std;

/*
Some C++ data types, their format specifiers, and their most common bit widths are as follows:

• Int ("%d"):       32 Bit integer
• Long ("%ld"):     64 bit integer

• Char ("%c"):      Character type

• Float ("%f"):     32 bit real value
• Double ("%lf"):   64 bit real value

-------------------------------------------*/

// To read a data type, use the following syntax:
void read_a_data_type()
{
    char ch;
    double d;
    scanf("%c %lf", &ch, &d); // <cstdio>
    // d 234.432\n
    printf("%c %lf", ch, d); // <cstdio>
    // d 234.432000

    // cout << ch << " " << d << endl; // d 234.432
}

// To print a data type, use the following syntax:
void print_a_data_type()
{
    char ch = 'd';
    double d = 234.432;
    printf("%c %lf", ch, d); // <cstdio>
    // d 234.432000
}

/*
Note: You can also use cin and cout instead of scanf and printf;
however, if you are taking a million numbers as input and printing a million lines,
it is faster to use scanf and printf.
*/

int main()
{
    read_a_data_type();
    // print_a_data_type();
    return 0;
}