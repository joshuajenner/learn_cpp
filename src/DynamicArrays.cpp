#include <iostream>
#include <string>
#include <vector>

struct Vertex 
{
	float x, y, z;
};

std::ostream& operator <<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main() 
{
	/*Vertex* vertices = new Vertex[5];*/

	std::vector<Vertex> vertices;

	for (Vertex& v : vertices)
		std::cout << v << std::endl;

	std::cin.get();
}