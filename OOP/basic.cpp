#include <iostream>

using namespace std;

class Animal
{
public:
    // attributes
    string species;
    string name;
    int age;

    // methods
    void add_animal()
    {
        cout << "Adding a new animal to the database: " << endl;
        cout << "Specify the species: ";
        cin >> species;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
    }

    void give_voice()
    {
        if (species == "cat")
            cout << "Meow " << name << " age:" << age << endl;
        else if (species == "goat")
            cout << "Bleat " << name << " age:" << age << endl;
        else if (species == "cow")
            cout << "Mooo " << name << " age:" << age << endl;
        else
            cout << "Unknown species" << endl;
    }
};

int main()
{
    Animal z1;
    


    return 0;
}
