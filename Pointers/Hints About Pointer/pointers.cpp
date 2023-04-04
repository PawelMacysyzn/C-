#include <iostream>
#include <cstring>

#define SHOW(elem) std::cout << elem << std::endl;

void double_pointers()
{
    char *buffer = new char[8];
    memset(buffer, 0, 8);

    char **ptr = &buffer; // pyr 0x00bcf7d8
    // W pamięci wygląda to tak ..
    // ...
    // 0x00bcf7d8 b8 f1 02 00 cc cc cc cc cc cc ca c8 a0 1d 84 ...
    // ...
    //
    // 4 bajty w pamięci wskazujące na 0002f1b8 => 0x0002f1b8
    //
    // gdzie 0x0002f1b8 wskazuje na
    //
    // 0x0002f1b8 00 00 00 00 00 00 00 00 cc cc ca c8 a0 1d 84 ...

    delete[] buffer;
}

void mem_set()
{
    char *buffer = new char[8];
    // memset("gdzie", "jaka value", "jaki size");
    memset(buffer, 0, 8); // #include <cstring>

    // W pamięci wygląda to tak ..
    // ...
    // 0xa384dffcf4 00 00 00 00 00 00 00 00 cc cc ca c8 a0 1d 84 ...
    // ...
    // Zapis "00 00 00 00 00 00 00 00" oznacza że wykorzystujemy 8 bajty

    delete[] buffer;
}

void void_pounter()
{
    int var = 8;
    void *ptr = &var; // W pamięci wygląda to tak ..
    // ...
    // 0xa384dffcf4 08 00 00 00 cc cc cc cc cc cc ca c8 a0 1d 84 ...
    // ...
    // Zapis "08 00 00 00" oznacza że wykorzystujemy 4 bajty

    int *ptr1 = &var; // W pamięci wygląda to tak ..
    // ...
    // 0xa384adfcfc 08 00 00 00 cc cc cc cc cc cc ca c8 a0 1d 84 ...
    // ...
    // Zapis "08 00 00 00" oznacza że wykorzystujemy 4 bajty

    double *ptr2 = (double *)&var; // W pamięci wygląda to tak ..
    // ...
    // 0xa384adfcfc 08 00 00 00 cc cc cc cc cc cc ca c8 a0 1d 84 ...
    // ...
    // Zapis "08 00 00 00" oznacza że wykorzystujemy 4 bajty

    // *
    // ROZMIAR WSKAŹNIKA NIE MA ZNACZENIA !
    // *

    // SHOW(*ptr); // Nie możeby wyświetlić wkazywaniej wartości przez wskaźnik ptr
    SHOW(*ptr1); // 8
}

int main()
{
    void_pounter();
    mem_set();
    double_pointers();
    return 0;
}

// Source: https://www.youtube.com/watch?v=DTxHyVn0ODg&ab_channel=TheCherno