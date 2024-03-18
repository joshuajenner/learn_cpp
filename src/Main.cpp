#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{


    char name[] = "Cherno";
    name[2] = 'a';

    const char* name1 = u8"Cherno";
    const wchar_t* name2 = L"Cherno";
    const char16_t* name3 = u"Cherno";
    const char32_t* name4 = U"Cherno";

    std::cout << name << std::endl;
    std::cin.get();
}


