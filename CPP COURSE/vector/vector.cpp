#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> &vector)
{
    for (auto &elem : vector) // for each
    {
        cout << elem << " ";
    }
    cout << endl;
}

void print_vector(vector<char> &vector)
{
    for (auto &elem : vector) // for each
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> numbers{4, 2, 4, 5};
    vector<char> vowels_pl{'a', 'e', 'i', 'o', 'u'};

    cout << numbers[1] << endl;
    // 2
    cout << vowels_pl[2] << endl;
    // i

    cout << "-----------------------------------" << endl;

    for (auto &elem : numbers) // for each
    {
        cout << elem << " ";
    }
    cout << endl;
    // 4 2 4 5

    cout << "-----------------------------------" << endl;

    for (auto &elem : vowels_pl) // for each
    {
        cout << elem << " ";
    }
    cout << endl;
    // a e i o u

    cout << "-----------------------------------" << endl;

    numbers.push_back(14);
    numbers.push_back(4);

    print_vector(numbers);
    // 4 2 4 5 14 4

    cout << "-----------------------------------" << endl;

    cout << "-----------------------------------" << endl;

    vowels_pl.push_back(14);
    vowels_pl.push_back(4);
    vowels_pl.push_back('a');

    print_vector(vowels_pl);
    // a e i o u ♫ ♦ a

    vowels_pl.pop_back();
    print_vector(vowels_pl);
    // a e i o u ♫ ♦

    cout << "-----------------------------------" << endl;

    cout << vowels_pl.size() << endl;
    // 7

    cout << "-----------------------------------" << endl;

    return 0;
}
