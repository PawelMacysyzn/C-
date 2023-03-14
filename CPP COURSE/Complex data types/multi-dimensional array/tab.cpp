#include <iostream>

using namespace std;

int main()
{
    int tab_1[3][4] = {4, 5, 3, 4,
                       5, 2, 1, 2,
                       5, 2, 3, 1};

    int tab_2[4] = {4, 5, 3, 4};

    cout << tab_1[0][1] << endl;
    // 5
    cout << tab_1[1][2] << endl;
    // 1

    cout << "-----------------------------------" << endl;

    for (int elem : tab_2) // for each
    {
        cout << elem << " ";
    }
    cout << endl;

    // 4 5 3 4

    cout << "-----------------------------------" << endl;

    for (auto &rows : tab_1) // for each
    {
        for (auto &elem : rows)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    

    return 0;
}