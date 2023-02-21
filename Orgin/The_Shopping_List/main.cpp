#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void displayItems(map<string, int> &items)
{
    cout << endl;
    for (auto it = items.begin(); it != items.end(); it++)
        cout << it->first << " (" << it->second << ")" << endl;
}

void addItem(map<string, int> &items)
{
    string item;
    int quantity;

    cout << "Enter the product name:" << endl;
    cin >> item;
    cout << "Enter quantity of product:" << endl;
    cin >> quantity;

    if (items.count(item) > 0)
    {
        items.at(item) += quantity;
        cout << "Increased quantity" << endl;
    }
    else
    {
        items.emplace(item, quantity);
        cout << "Product added" << endl;
    }
}

void saveItemToFile(map<string, int> &items)
{
    ofstream shoppingListFile;
    shoppingListFile.open("shoppingList.txt");

    for (auto it = items.begin(); it != items.end(); it++)
        shoppingListFile << it->first << " (" << it->second << ")" << endl;
    shoppingListFile.close();
}

int main()
{
    map<string, int> items;
    items.emplace("Eggs", 4);

    int option = -1;

    while (option)
    {
        cout << endl;
        cout << "0. End program" << endl;
        cout << "1. View products" << endl;
        cout << "2. Add product" << endl;
        cout << "3. Save Shopping list to file" << endl;
        cout << "-----------------------------" << endl;
        cout << "Select options: ";
        cin >> option;

        if (option == 1)
            displayItems(items);
        else if (option == 2)
            addItem(items);
        else if (option == 3)
            saveItemToFile(items);
    }

    return 0;
}
