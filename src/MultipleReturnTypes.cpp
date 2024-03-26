// Using pass by reference to get return values

#include <array>
#include <utility>
#include <functional>

void ReferenceReturn(int* out1, int* out2) 
{
	if (out1)
		*out1 = 1;
	if (out2)
		*out2 = 2;
}

int* PointerReturn()
{
	return new int[2] {1, 2};
}

std::array<int, 2> ArrayReturn()
{
	return std::array<int, 2>{1, 2};
}

void VectorReturn() 
{
	
}


std::tuple<int, float> TupleReturn() 
{
	return std::make_pair(1, 1.1f);
}

int main() 
{
	int* val1;
	int* val2;
	ReferenceReturn(val1, val2);

	int* returnVal = PointerReturn();

	std::array<int, 2> returnVal2 = ArrayReturn();
}