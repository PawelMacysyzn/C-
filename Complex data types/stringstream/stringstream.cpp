#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Zmiennia str na vector <int>
    stringstream ss(str);
    vector<int> v;

    while (ss)
    {
        int n;
        char ch;
        ss >> n >> ch;
        v.push_back(n);
    }
    return v;
}

int main()
{
    // string str;
    // cin >> str;

    string str = "23,4,56";
    vector<int> integers = parseInts(str);

    for (auto elem : integers)
        cout << elem << " ";
    // 23 4 56

    return 0;
}
