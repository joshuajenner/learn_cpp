#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void Log(int num)
{
	std::cout << num << std::endl;
}