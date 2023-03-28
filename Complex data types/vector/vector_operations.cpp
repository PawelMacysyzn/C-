#include <bits/stdc++.h>
#include <iostream>
#include <vector>

#include <numeric> // accumulate(first_index, last_index, initial value of sum);

using namespace std;

void example_of_sum(vector<int> arr)
{
    // accumulate
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << sum << endl;
    // 15
}

// C++11 and higher
void example_of_sum_with_foreach(vector<int> arr)
{
    int sum = 0;
    for (auto elem : arr)
    {
        sum += elem;
    }
    cout << sum << endl;
    // 15
}

// C++17 and above
void example_of_sum_with_reduce(vector<int> arr)
{
    // reduce
    auto sum = reduce(arr.begin(), arr.end());
    cout << sum << endl;
    // 15
}

void example_min_element(vector<int> arr)
{
    // *min_element() in STL
    int min = *min_element(arr.begin(), arr.end());
    cout << min << endl;
    // 2
}

void example_max_element(vector<int> arr)
{
    // *max_element() in STL
    int max = *max_element(arr.begin(), arr.end());
    cout << max << endl;
    // 5
}

int main()
{
    vector<int> vector_arr{4, 2, 4, 5};

    // Sum of vector
    example_of_sum(vector_arr);
    example_of_sum_with_foreach(vector_arr);
    example_of_sum_with_reduce(vector_arr);

    // Min element of vector
    example_min_element(vector_arr);
    // Max element of vector
    example_max_element(vector_arr);

    return 0;
}