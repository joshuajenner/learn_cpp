#include <iostream>
#include <string>

class String 
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string) 
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size + 1);
        // Need to add a null termination char
        m_Buffer[m_Size] = 0;
    }
    // Declaring the operator as a friend
    // Non-member functions that need access to private class members need to be friends
    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string) 
{
    stream << string.m_Buffer;
    return stream;
}

int main()
{
    String string = "Cherno";

    std::cout << string << std::endl;
    


    std::cin.get();
}




