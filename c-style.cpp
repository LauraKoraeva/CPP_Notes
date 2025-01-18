// std::strstr()

#include <iostream>
#include <cstring>

int main()
{
    const char* text = "Hello, world!";
    const char* subText_1 = "world";
    const char* subText_2 = "friends";
    
    
    if (std::strstr(text, subText_1))
        std::cout << "FOUND" << '\n';
    else
        std::cout << "NOT FOUND" << '\n';
        
    if (std::strstr(text, subText_2))
        std::cout << "FOUND" << '\n';
    else
        std::cout << "NOT FOUND" << '\n';
        
    return 0;
}


// FOUND
// NOT FOUND