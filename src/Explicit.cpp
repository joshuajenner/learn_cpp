#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    int m_Age;
    float m_Num;
public:
    Entity(const std::string& name)
        : m_Name(name), m_Age(-1), m_Num(0.0f) {}
    Entity(int age)
        : m_Name("Unkown"), m_Age(age), m_Num(0.0f) {}
    explicit Entity(float num)
        : m_Name("Unkown"), m_Age(-1), m_Num(num) {}

    const std::string& GetName() const { return m_Name; }
};


//int main()
//{
//    // This code is clearer though
//    Entity a("Charno");
//    Entity b(22);
//
//    // You can implicitly cast a type to class like this
//    // Must have constructor with just that variable type
//    Entity c = 22;
//
//    // Since there is explicit, this won't work
//    Entity d = 0.1f;
//
//    std::cin.get();
//}




