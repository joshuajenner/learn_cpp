#include <iostream>
#include <string>

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

// Since the data was initialized inside the function
// the array will be cleared once we exit the scope of the function
// so trying to return a pointer to the array is pointless (hehe)

int* CreateArray()
{
    int array[10];
    return array;
}

// The standard library provides a scoped pointer or unique pointer
// but this is a class that does the same thing or something similar

class ScopedPtr {
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr) 
        : m_Ptr(ptr) {}
    ~ScopedPtr() {
        delete m_Ptr;
    }
};

//int main()
//{
//    {
//        // implicit conversion
//        // The ScopedPtr is allocated on the stack and gets deleted
//        // The heap entity it is pointing to gets deleted as well
//        ScopedPtr e = new Entity();
//
//        Entity* e = new Entity();
//    }
//
//    std::cin.get();
//}




