#include <iostream>
#include "GLFW/glfw3.h"
// Static linking puts the library into the executable
// Dynamic libraries get linked at runtime

// Static linking can result in faster code, is usually the way to go

extern "C" int glfwInit();

int main() 
{
	int a = glfwInit();
	std::cout << a << std::endl;

	std::cin.get();
}