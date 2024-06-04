#include <iostream>

int main() 
{
	int a = 5;

	// Implicit cast
	double value = a;

	// Explicit cast
	// C Style casts - specifying the type we're casting to
	double value2 = (double)a;
	

	int x = 5;

	// C++ style casts
	// static cast 
	double s = static_cast<double>(x);
	// reinterpret cast
	// dynamic cast
	// const cast
	
	// syntax sugar allows you to search for which specific casts you used

	std::cin.get();
}