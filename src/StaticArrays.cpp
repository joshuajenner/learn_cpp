#include <iostream>
#include <array>

template <int size>
void Print(const std::array<int, size>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << std::endl;
	}
}
// Standard array has optional bounds checking
// Standard array is pretty fast, stored on stack
// Added layer of debugging, tracks size for you
int main()
{
	std::array<int, 5> data;

	data[0] = 2;
	data[1] = 4;



	std::cin.get();
}