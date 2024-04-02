#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// An anonymous function
// whenever you have a function pointer you can use a lambda
// define a function without having to define a function
// whenever we would set a function pointer to a function,
// we can set it to a lambda instead

// Defer the calling of a function
// Specify could that you want to run in the future

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 2, 3 };
	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3;});
	int a = 5;

	auto lambda = [=](int value) {std::cout << "Value: " << value << std::endl;};
	ForEach(values, lambda);

	std::cin.get();
}