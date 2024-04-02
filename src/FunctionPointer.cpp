#include <iostream>
#include <vector>

// C style raw function pointer
// Assign a function to a variable
// Pass functions to other functions

//void HelloWorld(int a)
//{
//	std::cout << "Hello World! Value: " << a << std::endl;
//}

void PrintValue(int value)
{
std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int val : values)
	{
		func(val);
	}
}

int main()
{
	//typedef void(*HelloWorldFunction)(int);

	//HelloWorldFunction function = HelloWorld;

	////auto function = HelloWorld;

	//function(1);
	//function(2);


	std::vector<int> values = {1, 5, 4, 2, 3};
	//ForEach(values, PrintValue);

	// Lambda
	ForEach(values, [](int value) {
		std::cout << "Value: " << value << std::endl;
		});

	std::cin.get();
}