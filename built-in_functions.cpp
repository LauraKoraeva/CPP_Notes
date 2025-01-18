//std::distance with std::vector

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    std::cout << std::distance(vec.begin(), vec.end()) << '\n';     // 5
    std::cout << std::distance(vec.begin(), vec.begin() + 4) << '\n';     // 4
    
    return 0;
}










//std::find with std::vector

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    auto it = std::find(vec.begin(), vec.end(), 4);
    int index = std::distance(vec.begin(), it);
    std::cout << index << '\n';     // 3
    
    return 0;
}










//std::find with array[]

#include <iostream>

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int length = sizeof(arr) / sizeof(arr[0]);
    
    auto it = std::find(arr, arr + length, 4);
    int index = std::distance(arr, it);
    std::cout << index << '\n';     // 3
    
    return 0;
}










// std::find with std::string

#include <iostream>
#include <cstring>
#include <vector>

int main()
{
    std::string vec = "Hello, world";
    
    auto it = std::find(vec.begin(), vec.end(), 'w');
    int index = std::distance(vec.begin(), it);
    std::cout << index << '\n';       // 7
    std::cout << *it;     // w  
    return 0;
}










// std::find vs s.find(‘L’): std::find - возвращает итератор; str.find - возвращает индекс.

// s.find('w') with std::string

#include <iostream>
#include <cstring>
#include <vector>

int main()
{
    std::string greeting = "Hello, world";
    
    int index = greeting.find('w');
    std::cout << index;
    
    return 0;
}










//std::abs(), std::labs(), std::llabs()

#include <iostream>
#include <cmath>

int main() {
    int i_1 = 15;
    int i_2 = -55;
    std::cout << std::abs(i_1) << '\n';     // 15
    std::cout << std::abs(i_2) << '\n';     // 55
    
    long l_1 = 227787985;
    long l_2 = -438989898;
    std::cout << std::labs(l_1) << '\n';     // 227787985
    std::cout << std::labs(l_2) << '\n';     // 438989898
    
    long long ll_1 = 22778798908;
    long long ll_2 = -43898989878;
    std::cout << std::llabs(ll_1) << '\n';     // 22778798908
    std::cout << std::llabs(ll_2) << '\n';     // 43898989878
    
    return 0; 
}
