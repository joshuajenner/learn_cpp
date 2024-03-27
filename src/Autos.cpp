#include <iostream>
#include <string>
// Auto tries to work out what the type should be

std::string GetName()
{
	return "Cherno";
}

int main() 
{
	std::string name = GetName();

	std::cout << "" << std::endl;

	std::cin.get();
}