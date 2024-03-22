#include <iostream>
#include <string>

class Entity 
{
public:
	int x;
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr 
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity) 
	: m_Obj(entity){

	}
	~ScopedPtr()
	{
		delete m_Obj;
	}

	Entity* GetObject() { return m_Obj; }

	const Entity* operator->() const
	{
		return m_Obj;
	}
};

struct Vector3 
{
	float x, y, z;
};


int main()
{
	ScopedPtr entity = new Entity();
	entity.GetObject()->Print();
	entity->Print();

	Entity* ptr = new Entity();
	// dereferneces pointer
	// shortcut for dereferencing
	ptr->Print();


	int offset = (int)&((Vector3*)0)->x;
	std::cout << offset << std::endl;


	std::cin.get();
}