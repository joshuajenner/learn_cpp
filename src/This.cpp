// this keyword is only accessible in a member function
// member function is a function that belongs to a class or a method
// this is a pointer to the object instance within a method

#include <iostream>
#include <string>

class Entity 
{
public:
	int x, y;

	Entity(int x, int y)
	{
		// this helps us to access the object's variables
		// when they have the same name as the parameters
		// x = x;
		// (*this).x = x;
		this->x = x;
		this->y = y;

		//PrintEntity(*this);
	}

	int GetX() const 
	{
		// this is a const pointer
	}
};


//void PrintEntity(const Entity& e) 
//{
//
//}

//int main()
//{
//	std::cin.get();
//}