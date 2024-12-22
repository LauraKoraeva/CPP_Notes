#include <iostream>
#include <vector>

//инициализация вектора
//итерация по вектору
//ПЕРЕДАЧА ВЕКТОРА ПО ЗНАЧЕНИЮ
//обращение к вектору
//*vec.size()

void print(std::vector<int> v) // void print(const std::vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        std::cout << v[i] << " ";
    std::cout << '\n';
}


int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2(5);
    std::vector<int> vec3(5, 1);
    
    print(vec1);
    print(vec2);
    print(vec3);
    
    std::cout << vec3.at(0);
    std::cout << vec2.at(0);
    std::cout << vec3.at(1);
    std::cout << vec2.at(1);
    std::cout << vec3.at(2);
    std::cout << vec2.at(2);
    std::cout << vec3.at(3);
    std::cout << vec2.at(3);
    std::cout << vec3.at(4);
    std::cout << vec2.at(4);
    
    return 0;
}
































#include <iostream>
#include <vector>

//инициализация вектора
//итерация по вектору
//ПЕРЕДАЧА ВЕКТОРА ПО ССЫЛКЕ
//обращение к вектору
//*vec.size()

void print(std::vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        v[i] = 2;
        std::cout << v[i] << " ";
    }  
    std::cout << '\n';
}


int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2(5);
    std::vector<int> vec3(5, 1);
    
    print(vec1);
    print(vec2);
    print(vec3);
    
    std::cout << vec3.at(0);
    std::cout << vec2.at(0);
    std::cout << vec3.at(1);
    std::cout << vec2.at(1);
    std::cout << vec3.at(2);
    std::cout << vec2.at(2);
    std::cout << vec3.at(3);
    std::cout << vec2.at(3);
    std::cout << vec3.at(4);
    std::cout << vec2.at(4);
    
    return 0;
}


























#include <iostream>
#include <vector>

//инициализация вектора
//итерация по вектору
//ПЕРЕДАЧА ВЕКТОРА ПО УКАЗАТЕЛЮ
//обращение к вектору
//*vec.size()

void print(std::vector<int>* v)  // void print(const std::vector<int>* v)
{
    for (int i = 0; i < v->size(); ++i)    // -> вместо .
    {
        v->at(i) = 2;                      // -> вместо .
        std::cout << v->at(i) << " ";      // -> вместо .
    }  
    std::cout << '\n';
}


int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2(5);
    std::vector<int> vec3(5, 1);
    
    print(&vec1);      // &
    print(&vec2);      // &
    print(&vec3);      // &
    
    std::cout << vec3.at(0);
    std::cout << vec2.at(0);
    std::cout << vec3.at(1);
    std::cout << vec2.at(1);
    std::cout << vec3.at(2);
    std::cout << vec2.at(2);
    std::cout << vec3.at(3);
    std::cout << vec2.at(3);
    std::cout << vec3.at(4);
    std::cout << vec2.at(4);
    
    return 0;
}











































//vec.size()
//vec.resize(5)
//vec.clear()

#include <iostream>
#include <vector>

void print(std::vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v.at(i) << " ";
    }
    std::cout << '\n';
}


int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2 = { 1, 2, 3, 4, 5 };
    std::vector<int> vec3(10, 5);
    
    std::cout << "size\n";
    std::cout << vec1.size() << " ";     // 0
    std::cout << vec2.size() << " ";     // 5
    std::cout << vec3.size() << " ";     // 10
    
    print(vec1);
    print(vec2);
    print(vec3);
    
    vec1.resize(15);     // инициализирует 0 по умолчанию
    vec2.resize(15);
    vec3.resize(15);
    
    std::cout << "size\n";
    std::cout << vec1.size() << " ";     // 15
    std::cout << vec2.size() << " ";     // 15
    std::cout << vec3.size() << " \n";     // 15
    
    print(vec1);
    print(vec2);
    print(vec3);
    
    vec1.clear();
    vec2.clear();
    vec3.clear();
    
    std::cout << "size\n";
    std::cout << vec1.size() << " ";    
    std::cout << vec2.size() << " ";    
    std::cout << vec3.size() << " ";     
    
    print(vec1);
    print(vec2);
    print(vec3);
    
    return 0;
}
























//vec.capacity();
//vec.reserve(5);
//vec.shrink_to_fit();
//*vec.size();

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2 = { 1, 2, 3, 4, 5 };
    std::vector<int> vec3(10, 5);
    
    std::cout << "vec1" << '\t';
    std::cout << "size: " << vec1.size() << '\t';
    std::cout << "capacity: " << vec1.capacity() << '\n';
    
    std::cout << "vec2" << '\t';
    std::cout << "size: " << vec2.size() << '\t';
    std::cout << "capacity: " << vec2.capacity() << '\n';
    
    std::cout << "vec3" << '\t';
    std::cout << "size: " << vec3.size() << '\t';
    std::cout << "capacity: " << vec3.capacity() << '\n';
    
    vec1.reserve(5);
    vec2.reserve(10);
    vec3.reserve(15);
    
    std::cout << "After vec.reserve(5)\n";
    std::cout << "vec1" << '\t';
    std::cout << "size: " << vec1.size() << '\t';
    std::cout << "capacity: " << vec1.capacity() << '\n';
    
    std::cout << "vec2" << '\t';
    std::cout << "size: " << vec2.size() << '\t';
    std::cout << "capacity: " << vec2.capacity() << '\n';
    
    std::cout << "vec3" << '\t';
    std::cout << "size: " << vec3.size() << '\t';
    std::cout << "capacity: " << vec3.capacity() << '\n';
    
    vec1.shrink_to_fit();
    vec2.shrink_to_fit();
    vec3.shrink_to_fit();
    
    std::cout << "After vec.shrink_to_fit()\n";
    std::cout << "vec1" << '\t';
    std::cout << "size: " << vec1.size() << '\t';
    std::cout << "capacity: " << vec1.capacity() << '\n';
    
    std::cout << "vec2" << '\t';
    std::cout << "size: " << vec2.size() << '\t';
    std::cout << "capacity: " << vec2.capacity() << '\n';
    
    std::cout << "vec3" << '\t';
    std::cout << "size: " << vec3.size() << '\t';
    std::cout << "capacity: " << vec3.capacity() << '\n';
    
    return 0;
}





// count

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 5, 6, 7 };
    int fives = std::count(numbers.begin(), numbers.end(), 5);
    std::cout << fives << '\n';     // 2

    return 0;
}

