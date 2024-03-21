#include <iostream>
#include <string>

struct Vector2
{
    float x, y;

    Vector2(float newX, float newY)
        : x(newX), y(newY) {}

    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(x * other.x, y * other.y);
    }

    // Type in the word operator then the operator you want to overload
    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }

    Vector2 operator*(const Vector2& other) const
    {
        return Multiply(other);
    }

    bool operator==(const Vector2& other) const
    {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Vector2& other) const
    {
        return !(*this == other);
    }
};

// We can overload the left shift operator to print out Vector2 struct
// The ostream class is what we are editing so this is defind outside of Vector2
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << ", " << other.y;
    return stream;
}


//int main()
//{
//    // Operator Overloading
//    // Not available in Java, somewhat supported in C#
//    // Should be minimal, only used when it makes perfect sense
//    // Eg. overloading for a maths class
//
//    Vector2 position(4.0f, 8.0f);
//    Vector2 speed(0.5f, 0.5f);
//    Vector2 boost(1.1f, 1.1f);
//
//    Vector2 result1 = position.Add(speed.Multiply(boost));
//    Vector2 result2 = position + speed * boost;
//
//    std::cout << result1 << std::endl;
//
//    std::cin.get();
//}




