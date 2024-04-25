#include <iostream>

// A 2d array is an array of pointers to other arrays

int main() 
{
	// Pointer to an int
	// Allocating memory for 50 ints
	int* array = new int[50];
	array[0] = 1;

	// Pointer to an int Pointer
	// Allocating memory for 50 int pointers
	int** a2d = new int* [50];
	for (int i = 0; i < 50; i++)
		a2d[i] = new int[50];

	a2d[0][0] = 1;

	// To delete, you must iterate through the entire array
	// just deleteing the variable will lead to a memory leak

	for (int i = 0; i < 50; i++)
		delete[] a2d[i];

	delete[] a2d;

	// You might be better off using a single dimension array
	// This is faster than a 2d array since we need to jump 
	// to a different array address when going to another row
	int* array = new int[5 * 5];
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++) 
		{
			array[x + y * 5] = 2;
		}
	}


	// 3d array example

	int*** a3d = new int** [50];
	for (int i = 0; i < 50; i++) 
	{
		a3d[i] = new int* [50];
		for (int j = 0; i < 50; j++) 
		{
			a3d[i][j] = new int[50];
		}
	}

	a3d[0][0][0] = 1;
	

	// To delete, you must iterate through the entire array
	// just deleteing the variable will lead to a memory leak


	std::cin.get();
}