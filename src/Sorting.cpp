#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() 
{
	std::vector<int> values = { 1, 5, 4, 3, 2 };

	// not providing a predicate means the sort function
	// will default to ascending order
	std::sort(values.begin(), values.end(), std::greater<int>());
	
	// std::greater from functional will sort it to be greaters first; descending
	std::sort(values.begin(), values.end(), std::greater<int>());

	// Lambda for custom sort
	std::sort(values.begin(), values.end(), [](int a, int b) 
	{
		// Which item should appear first, return true if a
		// Make 1 appear at the bottom
		if (a == 1)
			return false;
		if (b == 1)
			return true;

		return a < b;
	});

	for (int value : values)
		std::cout << value << std::endl;

	std::cin.get();
}