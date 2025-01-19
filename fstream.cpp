#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");
    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);
    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::string word;
    in_file >> word;
    std::cout << word << std::endl;

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::string word;
    in_file >> word;
    std::cout << word << std::endl;

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::string word;
    int number;

    in_file >> word >> number;
    std::cout << word << " " << number << std::endl;

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::string word;
    int number;

    in_file >> word >> number;
    std::cout << word << " " << number << std::endl;

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::string word;
    in_file >> word;
    std::cout << word << std::endl;

    in_file >> word;
    std::cout << word << std::endl;

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::string word;
    in_file >> word;
    std::cout << word << std::endl;

    in_file >> word;
    std::cout << word << std::endl;

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::string word;

    while (!in_file.eof())
    {
        in_file >> word;
        std::cout << word << std::endl;
    }

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::string word;

    while (!in_file.eof())
    {
        in_file >> word;
        std::cout << word << std::endl;
    }

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::string word[7];

    for (int i = 0; i < 7; ++i)
    {
        in_file >> word[i];
    }

    for (int i = 0; i < 7; ++i)
    {
        std::cout << word[i] << std::endl;
    }

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::string word[7];

    for (int i = 0; i < 7; ++i)
    {
        in_file >> word[i];
    }

    for (int i = 0; i < 7; ++i)
    {
        std::cout << word[i] << std::endl;
    }

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::string word[10];
    int count = 0;

    while (!in_file.eof())
    {
        in_file >> word[count];
        ++count;
    }

    for (int i = 0; i < count; ++i)
    {
        std::cout << word[i] << std::endl;
    }

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::string word[10];
    int count = 0;

    while (!in_file.eof())
    {
        in_file >> word[count];
        ++count;
    }

    for (int i = 0; i < count; ++i)
    {
        std::cout << word[i] << std::endl;
    }

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::vector<std::string> word;
    

    while (!in_file.eof())
    {
        std::string w;
        in_file >> w;
        word.push_back(w);
    }

    for (int i = 0; i < word.size(); ++i)
    {
        std::cout << word[i] << std::endl;
    }

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::vector<std::string> word;
    

    while (!in_file.eof())
    {
        std::string w;
        in_file >> w;
        word.push_back(w);
    }

    for (int i = 0; i < word.size(); ++i)
    {
        std::cout << word[i] << std::endl;
    }

    in_file.close();

    return 0;
}
