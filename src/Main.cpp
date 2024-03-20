#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unkown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

void Function() {

}

int main()
{
    Entity* entity = new Entity("Charno");
    std::cout << (*entity).GetName() << std::endl;

    delete entity;


    int* heapNum = new int;


    std::cin.get();
}




