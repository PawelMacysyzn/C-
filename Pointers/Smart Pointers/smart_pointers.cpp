#include <iostream>
#include <string>
#include <memory> // std::unique_ptr

// Głowną ideą istninia smart pointerów jest automatyzacja użycia alokowania pamięci na stercie "HEAP",
// przez allokowanie nowych pamięci i zwalnianie niepotrzebnych
// w skrócie, ..
// Kiedy wywołujesz "new" nie musisz wywoływać "delete", wogóle nie musisz wywoływać "new" :)

// Parę zasad:
// Nie można kopiować "unique pointers"

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }
    void Print() {}
};

// -------------------------------------------------------------

void shared_pointer()
{
    {
        std::shared_ptr<Entity> e0;
        {
            // std::unique_ptr<Entity> entity = std::make_unique<Entity>();
            // // std::unique_ptr<Entity> e0 = entity; // Nie można !

            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
            // Created Entity!

            e0 = sharedEntity;
        }
    }
    // Destroyed Entity!
}

// -------------------------------------------------------------

void weak_pointer()
{
    {
        std::weak_ptr<Entity> e0;
        {
            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
            // Created Entity!

            e0 = sharedEntity;
        }
        // Destroyed Entity!
    }
}

// -------------------------------------------------------------

void unique_ponter()
{
    // Tworzę scope
    {
        // std::unique_ptr<Entity> entity = new Entity(); // Nie można !

        // std::unique_ptr<Entity> entity(new Entity());

        std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // Dlatego rzuca wątkiem, który możemy złapać. More Safety
        // Created Entity!
        entity->Print();
    }
    // Destroyed Entity!
}

// -------------------------------------------------------------

int main()
{
    // unique_ponter();
    // shared_pointer();
    weak_pointer();
    return 0;
}

// Source: https://www.youtube.com/watch?v=UOB7-B2MfwA&ab_channel=TheCherno