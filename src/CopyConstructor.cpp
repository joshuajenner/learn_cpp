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
    // Don't allow copying
    // String(const String& other) = delete;

    // Copy constructor
    String(const String& other)
        :m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String() 
    {
        delete[] m_Buffer;
    }

    char& operator[] (unsigned int index) 
    {
        return m_Buffer[index];
    }

    // Declaring the operator as a friend
    // Non-member functions that need access to private class members need to be friends
    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

// should be marked as const since we aren't editing the argument
void PrintString(const String& string) 
{
    // Always pass objects by const reference
    // Should pass in a refernce so that the copy constructor isn't called
    std::cout << string << std::endl;
} 

std::ostream& operator<<(std::ostream& stream, const String& string) 
{
    stream << string.m_Buffer;
    return stream;
}

int main()
{
    String string = "Cherno";
    String second = string;

    second[2] = 'a';

    std::cout << string << std::endl;
    std::cout << second << std::endl;
    
    std::cin.get();
}




