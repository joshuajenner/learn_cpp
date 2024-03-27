#include <iostream>
#include <string>

// Also known as Generics in managed languages
// Getting the compiler to write code for you based on a set of rules
// and the usage of the function or class
template<typename t, int n>
class Array
{
private:
	t m_Array[n];
public:
	int GetSize() const { return n };
};


// Only gets created when called.
template<typename t>
void Print(t value) 
{
	std::cout << value << std::endl;
}

int main() 
{
	Print<int>(5);
	Print("Five");
	Print(5.5f);

	Array<int, 5> array;
	std::cout << array.GetSize() << std::endl;

	std::cin.get();
}