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

class Car
{
public:
    // attributes
    string brand, model;
    int year, mileage;

    // methods
    void add_car()
    {
        cout << "Adding a new car to the database: " << endl;
        cout << "Specify the brand: ";
        cin >> brand;
        cout << "Enter the model: ";
        cin >> model;

        cout << "Enter the year of production: ";
        cin >> year;
        cout << "Enter the mileage of the car: ";
        cin >> mileage;
    }

    void show_car()
    {
        cout << brand << " " << model << endl;
        cout << "Year of production: " << year << endl;
        cout << "Mileage of the car: " << mileage << endl;
    }
};

void example_class_Animal()
{
    Animal z1;
    z1.add_animal();
    z1.give_voice();
    // Meow Fat age:87
}

void example_class_Car()
{
    Car c1;
    c1.add_car();
    c1.show_car();
    // BMW 3
    // Year of production: 2023
    // Mileage of the car: 1
}

int main()
{
    // example_class_Animal();
    example_class_Car();
    return 0;
}
