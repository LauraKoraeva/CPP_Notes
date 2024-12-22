STD::STRING

// insert

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello!";
    greeting.insert(5, ", World");
    std::cout << greeting;     // Hello, World!

    return 0;
}





// insert_range (C++23)

#include <iostream>
#include <string>
#include <array>

int main() {
    std::string greeting = "Hello!";
    std::array characters { ' ', 'W', 'o', 'r', 'l', 'd' };
    greeting.insert_range(greeting.begin() + 5, characters);
    std::cout << greeting;
    
    return 0;
}





// append

#include <iostream>
#include <string>

int main() {
    std::string name = "Laura";
    std::string surname = " Koraeva";
    name.append(surname);     // Laura Koraeva
    std::cout << name;

    return 0;
}





// append

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello";
    greeting.append(3, '!');
    std::cout << greeting;     // Hello!!!

    return 0;
}





// append

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, ";
    std::string options = "World,Everyone,Friends";
    greeting.append(options, 15, 7);
    std::cout << greeting;     // Hello, Friends

    return 0;
}





// append_range (C++23)

#include <iostream>
#include <string>
#include <array>

int main() {
    std::string greeting = "Hello, ";
    std::array characters{ 'W', 'o', 'r', 'l', 'd' };
    greeting.append_range(characters);
    std::cout << greeting;

    return 0;
}





// erase

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, World!";
    greeting.erase(5, 7);
    std::cout << greeting;     // Hello!

    return 0;
}





// erase

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, World!";
    greeting.erase();
    std::cout << greeting;     // 

    return 0;
}





// erase

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, World!";
    greeting.erase(5);
    std::cout << greeting;     // Hello

    return 0;
}





// erase

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, World!";
    greeting.erase({}, 7);
    std::cout << greeting;     // World!

    return 0;
}





// replace

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, World!";
    greeting.replace(7, 5, "Everyone");
    std::cout << greeting;     // Hello, Everyone!

    return 0;
}





// replace_with_range (C++23)

#include <iostream>
#include <string>
#include <array>

int main() {
    std::string greeting = "Hello, World!";
    std::array characters{ 'E', 'v', 'e', 'r', 'y', 'o', 'n', 'e' };
    greeting.replace_with_range(greeting.begin() + 7, greeting.begin() + 12, characters);
    std::cout << greeting;     

    return 0;
}





// Итераторы
// begin(), end()
// rbegin(), rend()
// cbegin(), cend()
// crbegin(), crend()

#include <iostream>
#include <string>

int main() {
    std::string name = "laura";
    
    std::string::iterator it_1;
    std::string::reverse_iterator it_2;

    for (it_1 = name.begin(); it_1 != name.end(); ++it_1)
    {
        if (it_1 == name.begin())
            *it_1 = 'L';
        std::cout << *it_1;
    }
    std::cout << '\n';

    for (it_2 = name.rbegin(); it_2 != name.rend(); ++it_2)
    {
        if (it_2 == name.rend())
            *it_2 = 'L';
        std::cout << *it_2;
    }
    std::cout << '\n';

    for (auto it_3 = name.cbegin(); it_3 != name.cend(); ++it_3)
        std::cout << *it_3;
    std::cout << '\n';

    for (auto it_4 = name.crbegin(); it_4 != name.crend(); ++it_4)
        std::cout << *it_4;
    std::cout << '\n';

    return 0;
}

// Laura
// aruaL
// Laura
// aruaL





// swap

#include <iostream>
#include <string>

int main() {
    std::string name = "Laura";
    std::string surname = "Koraeva";
    name.swap(surname);
    std::cout << name << '\n';     // Koraeva
    std::cout << surname << '\n';     // Laura

    return 0;
}





// Accessing Characters

#include <iostream>
#include <string>

int main() {
    std::string name = "Laura";
    std::cout << name[0] << '\n';        // L
    std::cout << name.at(0) << '\n';     // L

    return 0;
}






// Concatenating Strings ( + operator )

#include <iostream>
#include <string>

int main() {
    std::string name = "Laura";
    std::string surname = "Koraeva";
    std::string fullName = name + " " + surname;
    std::cout << fullName << '\n';     // Laura Koraeva

    name += surname;
    std::cout << name << '\n';         // LauraKoraeva

    return 0;
}





// String Comparison ( == operator )

#include <iostream>
#include <string>

int main() {
    std::string name_1 = "Laura";
    std::string name_2 = "Laura";
    std::string name_3 = "Nonna";

    if (name_1 == name_2)
        std::cout << "equal" << '\n';
    else
        std::cout << "not equal" << '\n';

    if (name_1 == name_3)
        std::cout << "equal" << '\n';
    else
        std::cout << "not equal" << '\n';

    return 0;
}





// find

#include <iostream>
#include <string>

int main()
{
    std::string name = "Laura Koraeva";
    std::cout << name.find('L') << '\n';             // 0
    std::cout << name.find("au") << '\n';            // 1
    std::cout << name.find("Koraeva") << '\n';       // 6

    std::string surname = "Koraeva";
    char letter = 'K';
    char lastName[8] = { 'K', 'o', 'r', 'a', 'e', 'v', 'a' };
    std::cout << name.find(surname) << '\n';         // 6
    std::cout << name.find(letter) << '\n';          // 6
    std::cout << name.find(lastName) << '\n';        // 6

    return 0;
}





// c_str()

#include <iostream>
#include <string>

int main()
{
    std::string nameS = "Laura Koraeva";
    const char* nameCh = nameS.c_str();    
    std::cout << nameCh;     // Laura Koraeva

    return 0;
}

