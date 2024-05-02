#include <iostream>

class Base
{
public:
    Base() { std::cout << "Base Constructed\n"; }
    virtual ~Base() { std::cout << "Base Destructed\n"; }
    // Virtual Destructor ^
};

class Derived : public Base
{
public:
    Derived() { m_Array = new int[5]; std::cout << "Derived Constructed\n"; }
    ~Derived() { delete[] m_Array; std::cout << "Derived Destructed\n"; }
private:
    int* m_Array;
};

int main()
{
    Base* base = new Base();
    delete base;

    std::cout << "-------------------------------\n";

    Derived* derived = new Derived();
    delete derived;

    // Calls Base, then Derived Constructor
    // Calls Derived, then Base Destructor

    std::cout << "-------------------------------\n";

    Base* poly = new Derived();
    delete poly;

    // Calls Base, then Derived Constructor
    // Calls Base Destructor only
    // Since we are calling delete on a Base pointer it only tries to call that destructor.
    // There is a memory leak since the array is not getting deleted.

    // Adding virtual to the Base class fixes this

    std::cin.get();
}