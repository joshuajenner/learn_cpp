#include <iostream>
// ^ Every statement starting with a hash is a pre-processor statement

// Using the Pre-processor to automate somethings
// Pure text replacement before compilation

// Generally should not be used
// Can make it difficult for others to read your code

// Example but do not do this
#define WAIT std::cin.get()
#define OPEN_CURLY {


// PR_DEBUG defined in project settings
// better than #ifdef
#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#elif PR_RELEASE == 1
#define LOG(x)
#endif

int main()
{
	LOG("Hello");
	WAIT;
}