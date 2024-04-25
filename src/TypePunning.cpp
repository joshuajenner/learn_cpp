#include <iostream>

// Type punning is treating memory as a different type than it actually is
// Get that type as a pointer and cast it to a different pointer

// C++ has a type system that can be worked around much easier than C# and Java
// Since you can directly access memory


// In memory, this struct will straight up just be these 2 ints
// No padding that tells us the structure of the data
// 4 + 4 bytes of data
struct Entity
{
	int x, y;

	int* GetPositions()
	{
		return &x;
	}
};

int main() 
{
	int a = 50;
	double dub = a;
	// implicit conversion

	// Get the memory address of a
	// Explicitly convert that into a double pointer
	// Dereference the pointer to a double, store that in value
	double bad = *(double*)&a;
	// Since we converted an int pointer to a double pointer
	// It looked 4 bytes passed the int memory that we dont own
	// It copies that memory into a new double block
	std::cout << bad << std::endl;
	 
	Entity e = { 5, 8 };
	int* position = (int*)&e;
	int y = *(int*)((char*)&e + 4);


	std::cout << position[0] << ", " << position[1] << std::endl;
	std::cout << y << std::endl;
	

	int* g_position = e.GetPositions();
	g_position[0] = 2;


	std::cin.get();
}