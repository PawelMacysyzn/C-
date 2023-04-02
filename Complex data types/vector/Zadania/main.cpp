#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show_vector(vector<int> &vec)
{
    for (auto elem : vec)
        cout << elem << " ";
    cout << endl;
}

void erase_indicated_item(vector<int> &vec, const int value)
{
    auto it = find(vec.begin(), vec.end(), value);
    vec.erase(it);
}

void exercise_one()
{
    vector<int> vec{1, 2, 4, 5, 6};

    // Usuń pierwszą wartość

    // vec.erase(vec.begin());
    // erase_indicated_item(vec, vec[0]); // przekazuję vec[0] jako wartosć, nie mozna działać na &vec[0]

    erase_indicated_item(vec, 1); // 1 2 5 6

    //////////////////////////////////////////////////////////

    // Dodaj wartość 5 na koniec wektora
    vec.push_back(5); // 2 4 5 6 5

    //////////////////////////////////////////////////////////

    // Dodaj wartość 12 na początek wektora, metodą emplace
    vec.emplace(vec.begin(), 12); // 12 2 4 5 6 5

    //////////////////////////////////////////////////////////

    // Wypisz rozmiar wektora i maksymalny możliwy rozmiar

    std::cout << "Size of the vector: " << vec.size() << std::endl;
    // Size of the vector: 6
    std::cout << "Maximum possible size of the vector: " << vec.max_size() << std::endl;
    // Maximum possible size of the vector: 2305843009213693951

    //////////////////////////////////////////////////////////

    // Wypisz zawartość wektora

    show_vector(vec); // 12 2 4 5 6 5

    //////////////////////////////////////////////////////////

    // Wyczyść wektor i wypisz jego rozmiar

    vec.clear(); //
    std::cout << "Size of the vector: " << vec.size() << std::endl;
    // Size of the vector: 0

    //////////////////////////////////////////////////////////
}

void show_size_and_capacity_of_vector(vector<int> &vec)
{
    std::cout << "Size of the vector: " << vec.size() << std::endl;
    std::cout << "Capacity of the vector: " << vec.capacity() << std::endl;
}

void exercise_two()
{
    vector<int> vec;

    std::cout << "Size of the vector: " << vec.size() << std::endl;
    std::cout << "Capacity of the vector: " << vec.capacity() << std::endl;
    // Size of the vector: 0
    // Capacity of the vector: 0

    //////////////////////////////////////////////////////////

    // Zmien rozmiar wektora na 10 i wypełnijn go wartościami 5

    vec.resize(10);    // 0 0 0 0 0 0 0 0 0 0
    vec.assign(10, 5); // 5 5 5 5 5 5 5 5 5 5

    show_size_and_capacity_of_vector(vec);
    // Size of the vector: 10
    // Capacity of the vector: 10

    //////////////////////////////////////////////////////////

    // Zarezerwój pamięć na 20 elementów
    vec.reserve(20);

    show_size_and_capacity_of_vector(vec);
    // Size of the vector: 10
    // Capacity of the vector: 20

    //////////////////////////////////////////////////////////

    // Zredukuj pojemność wektora metodą shrink_to_fit()

    vec.shrink_to_fit();
    show_size_and_capacity_of_vector(vec);
    // Size of the vector: 10
    // Capacity of the vector: 10
}

int main()
{
    // Zródło zadania:
    // https://www.youtube.com/watch?v=NjOx8MqC6u4&list=WL&index=49&ab_channel=CodersSchool

    // exercise_one();
    exercise_two();
    return 0;
}