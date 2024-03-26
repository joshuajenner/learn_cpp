#include <iostream>
#include <vector>

// Vector 
// When pushing items, the array size is increased when capacity is reached
// The items are re-allocated or copied which can be slow

struct Vertex {
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z)
	{
	}

	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};


int main() 
{
	std::vector<Vertex> vertices;
	// The vector is being resized every time push_back is called
	// We can give the vector more space so that we don't need to resize every time
	// This does not fill the vector with items
	vertices.reserve(6);

	// Currently, we are constructing the Vertex object in the stack frame of the main function
	// Then we pass it to the vector by copying it from the main function to the Vector class
	vertices.push_back(Vertex( 1, 2, 3 ));
	vertices.push_back(Vertex( 4, 5, 6 ));
	vertices.push_back(Vertex( 7, 8, 9 ));

	// Construct the vertex in place in the actual memory of the vector
	vertices.emplace_back(1, 2, 3);
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);


	std::cin.get();
}