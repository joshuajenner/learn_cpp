#include <iostream>
#include <string>
#include <algorithm>

namespace apple { 
    void print(const char* text)
    {
        std::cout << text << std::endl;
    }

    void print_again() {

    }
}

namespace orange {
    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << text << std::endl;
    }
}

// :: is the scope resolution operator.
// You can nest namespaces
// apple::functions::print(""); For eg.

int main() 
{
    // using namespace apple;
    // import everything from apple

    // using apple::print;
    // import just this function
    // print("Example");

    // namespace a = apple;
    // a::print("Hello");

    apple::print("Hello");
    orange::print("Hello");

    std::cin.get();
}