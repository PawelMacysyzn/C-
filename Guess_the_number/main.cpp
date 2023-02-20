#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;

    int userNumeber;

    do
    {
        cout << "Give a number: ";
        cin >> userNumeber;

        if (userNumeber > number)
        {
            cout << "Your number is too big" << endl;
        }
        else if (userNumeber < number)
        {
            cout << "Your number is too small" << endl;
        }
    } while (userNumeber != number);

    cout << "The correct number";

    return 0;
}