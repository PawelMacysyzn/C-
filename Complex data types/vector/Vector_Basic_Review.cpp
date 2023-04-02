#include <iostream>
#include <list>      // STL (Standard Template Library)
#include <algorithm> // jesli dostajemy błedy
#include <vector>    // STL (Standard Template Library)

// std::vector<T>
// • Cache-friendly:
// - Elemnty są zawsze ułożone obok siebie w pamięci, tak jak w zwykłej tablicy
// - Iterując po std::vector<T>, kolejne jego elementy będą ładowane do pamięci podręcznej procesora z wyprzedzeniem,
//   co niesamowicie przyspiesza odczytywanie danych (oraz modyfikację, jeśli robimy to jednowątkowo)

// • Typ T może być dowlony. Zarówno typ wbudowany jak int, double, jak i własny zdefiniowany przez nas typ.

// • Dodawanie/usuwanie elemntów na końcu jest:
// - szybkie jeśli size() < capacity()
// - kosztowny w przypadku, gdyż zachodzi alokacja dodatkowej pamięci na nowe elementy

// • Dodawanie/usuwanie z początku oraz środka jest kosztowne, gdyż należy przesunąc o 1 pozycje wszystkie kolejne elementy, aby zachować ciągłość wektora

// • W praktyce jednak pamieć cache tak bardzo przyspiesza pracę z std::vector nawet dodawanie/usuwanie elementów ze środka często będzie szybsze niż w kontynerach

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// OPERACJE                                              // METODY
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// dodawanie elementu                                       push_back(), emplace_back(), insert(), emplace()
//
// modyfikowanie/dostęp do elementu                         at(), vector[]
//
// pierwszy/ostatni element                                 front(), end()
//
// rozmair                                                  size()
//
// zarezerwowane miejsce                                    capacity()
//
// rezerwowanie miejsca w pamięci                           reserve()
//
// wyczyszczenie nieużywanej pamięci z wektora              shrink_to_fit()
//
// odwrócony (ang.reverse) iterator                         rbegin(), rend()
//
// stały iterator                                           cbegin(), cend(), crbegin(), crend()
//
// wyczyszczenie kontynera                                  clear()
//
// przygotowanie elementu do usunięcia                      std::remove() [nie jest metodą std::vector<T>]
//
// wymazanie elementów z pamięci                            erase()
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void example_push_elem_to_back()
{
    struct Point2D
    {
        int x, y;
    };

    std::vector<Point2D> vec{
        {1, 2}, {2, 0}, {-3, 10}};

    vec.push_back({5, 2}); // kopuje lub przenosi wartość którą mu podmy
    // {1, 2}, {2, 0}, {-3, 10}, {5, 2}

    vec.emplace_back(5, 2); // przekazujemy bezpośredio argumanty ( nie tworzy elementu tymczasowego)
    // {1, 2}, {2, 0}, {-3, 10}, {5, 2}, {5, 2}
}

// wstawianie w wybrany element
void example_insert_elem()
{
    std::vector<int> vec{1, 2, 3, 4};
    auto it = vec.begin();
    vec.insert(it, 20); // {20, 1, 2, 3, 4};

    it = vec.begin();
    vec.insert(it, 5, 20); // {20, 20, 20, 20, 20, 20, 1, 2, 3, 4};

    std::list<int> list{10, 20, 30, 40};
    vec.insert(vec.begin() + 2, list.begin(), list.end()); // {20, 20, 10, 20, 30, 40, 20, 20, 20, 20, 1, 2, 3, 4};
};

// iterowanie od końca
void example_iteration_from_end()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Wyświetlanie elementów
    for (auto it = vec.crbegin(); it != vec.crend(); ++it) // bezpieczny sposób ;)
    {
        // cr = (r)everse iterator to (c)onst value
        std::cout << *it << ' ';
        // 9 8 7 6 5 4 3 2 1
    }

    // Modyfikowanie elementów
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) // tu już jest mniej bezpiecznie ..
        *it *= 2;
    // 18 16 14 12 10 8 6 4 2
}

// Usówanie elementów z wektora
void example_with_remove_element_from_vector()
{
    // Najszybciej usówane są elementy z końca wektora !!!
    std::vector<int> vec{1, 4, 2, 4, 3, 4, 5};

    // Elemnty wektora które nie są usówane przenioszone są na lewą stronę,
    // na końcu wektora pozostają śmieci, które należy wymazać (ang. erase) z pamięci.
    auto it = std::remove(vec.begin(), vec.end(), 4); // for exmaple: vec {1, 2, 3, 5, 3, 4, 5}
    vec.erase(it, vec.end());
    // vec {1, 2, 3, 5}

    // or/lub

    // Erase-Remove Idiom
    vec.erase(std::remove(vec.begin(), vec.end(), 4), vec.end());
    // vec {1, 2, 3, 5}
}

void pointer_to_vector()
{
    std::vector<int> vec{1, 4, 2, 4, 3, 4, 5};

    // Tworzenie wskaźnika na początek wektora
    int *ptr = vec.data();

    cout << *ptr << " " << ptr << endl;
    // 1 0x25ebd936c50
    cout << vec[0] << " " << &vec[0] << endl;
    // 1 0x25ebd936c50
}

void example_size_of_wektor()
{
    std::vector<int> vec; // tworzymy pusty wektor

    vec.resize(5); // zmieniamy rozmiar wektora na 5
    // Rozmiar wektora: 5

    vec.reserve(10); // rezerwujemy pamięć dla 10 elementów, ale rozmiar wektora pozostaje bez zmian
    // Rozmiar wektora po rezerwacji: 5

    vec.push_back(42); // dodajemy nowy element na koniec wektora
    // Rozmiar wektora po dodaniu nowego elementu: 6
}

void assing_vector()
{
    std::vector<int> vec(10);  // tworzymy wektor o rozmiarze 10, wypełniony wartościami domyślnymi (0)

    vec.assign(10, 5);  // wypełniamy wektor wartościami 5

    std::vector<int> vec_two(20, 5);
    // W wyniku działania powyższego programu zostanie utworzony wektor vec o rozmiarze 20 i wypełniony wartością 5





}

int main()
{
    pointer_to_vector();
    return 0;
}