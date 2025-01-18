#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, int> ourMap;
    



    ourMap["Hey"] = 10;                                               // V1
    
    std::pair<std::string, int> oPair("Hello", 5);
    std::cout << oPair.first << " " << oPair.second << '\n';
    ourMap.insert(oPair);                                             // V2

    ourMap.insert(std::pair<std::string, int>("Hi", 7));              // V3

    ourMap.insert(std::make_pair<std::string, int>("Hooray", 15));    // V4



    std::cout << ourMap["Hey"] << '\n';
    std::cout << ourMap["Hello"] << '\n';
    std::cout << ourMap["Hi"] << '\n';
    std::cout << ourMap["Hooray"] << '\n';




    std::map<std::string, int>::iterator it = ourMap.find("Hello");
    std::cout << it->first << " " << it->second << '\n';

    std::cout << ourMap.begin()->first << " " << ourMap.begin()->second << '\n';




    for (std::map<std::string, int>::iterator it = ourMap.begin(); it != ourMap.end(); ++it)
    {
        std::cout << it->first << " " << it->second << '\n';
    }




    std::map<std::string, int>::iterator itf = ourMap.find("Hello");
    ourMap.erase(itf);                                                 // V1

    ourMap.erase("Hi");                                                // V2

}
