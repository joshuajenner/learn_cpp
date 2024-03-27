#include <iostream>

struct Vector3
{
	float x, y, z;

	Vector3() :x(10), y(11), z(12) {}
};

// Stack Vs Heap
// Both placed in RAM, Stack is generally 1-8 MB, Heap can change based on the program

int main()
{
	// Stack
	// when we allocate memory the stack pointer moves for that many bytes
	// the data is stored on top of each other like a stack
	// A stack allocation is extremely fast
	// when the scope comes to an end, all data is freed, the scope moves back that many bytes
	int value = 5;
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	// Heap
	// smart pointers will still call new for you
	// the new keyword just calls malloc
	// The program will manage a free list which tracks which blocks of memory are free
	// It will check the free list when free/malloc is called
	// If you ask for more memory than what is in the free list, the program will ask
	// the OS for more memory which is expensive
	int* h_value = new int;
	*h_value = 5;
	int* h_array = new int[5];
	h_array[0] = 1;
	h_array[1] = 2;
	h_array[2] = 3;
	h_array[3] = 4;
	h_array[4] = 5;
	Vector3* h_vector = new Vector3();

	delete h_value;
	delete[] h_array;
	delete h_vector;

	std::cin.get();
}