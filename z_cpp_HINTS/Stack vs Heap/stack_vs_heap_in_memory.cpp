#include <iostream>
#include <string>

struct Vector3
{
    float x, y, z;

    Vector3()
        : x(10), y(11), z(12) {}
};

int main()
{
    //------------------ STCAK -------------------------

    // allocate in stcak / stosie
    // Obsługiwane przez jedno CPU
    // Zmienne są zaalokowane są przy sobie w pamieci

    int value = 5;

    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    Vector3 vector;

    {
        int var; // po skonczeniu tej lini stos zostaje zwolniony/wyczyszczony
    }

    //------------------ HEAP -------------------------

    // allocate in heap / stercie

    // Zmienne są zaalokowane w róznych miejscach pamieci
    // Zaleca się używanie go przy alokowaniu dużych zasobów

    int *h_value = new int;
    *h_value = 5;

    int *h_array = new int[5];
    h_array[0] = 1;
    h_array[1] = 2;
    h_array[2] = 3;
    h_array[3] = 4;
    h_array[4] = 5;

    Vector3 *h_vector = new Vector3(); // Nawiasy są opcją

    delete h_value;
    delete[] h_array;
    delete h_vector;

    std::cout << "DONE";
}

// Source: https://www.youtube.com/watch?v=wJ1L2nSIV1s&ab_channel=TheCherno