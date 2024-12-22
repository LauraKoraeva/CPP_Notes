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











