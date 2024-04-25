#include <iostream>

// Unions are a struct type that can only have 1 member
// Give two different names to the same variable

// Multiple ways to address the same data

// Some problems can come out of this 

struct Vector2
{
	float x, y;
};

struct Vector4
{
	union 
	{
		struct
		{
			float x, y, z, w;
		};
		struct
		{
			Vector2 a, b;
		};
	};
};

void PrintVector2(const Vector2& vector)
{
	std::cout << vector.x << ", " << vector.y << std::endl;
}

int main() 
{
	Vector4 vector = { 1,2,3,4 };
	vector.x = 2.0f;
	PrintVector2(vector.a);
	PrintVector2(vector.b);
	vector.z = 500.0f;
	PrintVector2(vector.a);
	PrintVector2(vector.b);


	//struct Union
	//{
	//	union
	//	{
	//		float a;
	//		int b;
	//	};
	//};

	//Union u;
	//u.a = 2.0f;
	//std::cout << u.a << "," << u.b << std::endl;
	// Both variables occupy the same memory space

	std::cin.get();
}