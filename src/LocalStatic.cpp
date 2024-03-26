#include <iostream>

// Variable life time is how long a variable will remain in memory before being deleted
// Variable scope is where it is accesible


class Singleton 
{
public:
	static Singleton& Get() 
	{
		static Singleton instance;
		return instance;
	}

	void Hello() {}
};

void Function()
{
	// When using the static keyword, the first time the function is run while initialize i to 0
	// on subsequent times it will just refer to that variable

	// The variable's scope is limited to the function but not its life time
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main() 
{
	Singleton::Get().Hello();

	Function();
	Function();
	Function();
	Function();
	Function();

	std::cin.get();
}