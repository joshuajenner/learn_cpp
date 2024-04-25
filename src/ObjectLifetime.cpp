#include <iostream>
#include <string>

// A stack based variable gets deleted when it goes out of scope


class Entity 
{
public:
    Entity() {
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity() {
        std::cout << "Destroyed Entity!" << std::endl;
    }
};

// Data allocated in the stack gets cleared when out of scope

int* CreateArray()
{
    // Even though we are trying to return a pointer
    // we created the array on the stack which gets deleted once
    // we leave the scope of this function
    int array[10];
    return array;
}

// The standard library provides a scoped pointer or unique pointer
// but this is a class that does the same thing or something similar

class ScopedPtr 
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr) 
        : m_Ptr(ptr) {}
    ~ScopedPtr() {
        delete m_Ptr;
    }
};

int main()
{
    {
        // implicit conversion
        // The ScopedPtr is allocated on the stack and gets deleted
        // The heap entity it is pointing to gets deleted as well
        ScopedPtr e = new Entity();

        Entity* e = new Entity();
    }

    std::cin.get();
}




