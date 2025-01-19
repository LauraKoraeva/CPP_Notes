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










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    in_file.read(buffer, sizeof(buffer));

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    in_file.read(buffer, sizeof(buffer));

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    in_file.read(buffer, sizeof(buffer));

    for (int i = 0; i < 20; ++i)
    {
        std::cout << buffer[i];
    }

    in_file.close();

    return 0;
}

// apple 5
// orange 10
// ba










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    in_file.read(buffer, sizeof(buffer));

    for (int i = 0; i < 20; ++i)
    {
        std::cout << buffer[i];
    }

    in_file.close();

    return 0;
}

// apple 5
// orange 10










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// apple 5
// orange 10
// b










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// apple 5
// orange 10










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    in_file.read(buffer, sizeof(buffer));
    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// nana
// kiwi
// lemon
// ta










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    in_file.read(buffer, sizeof(buffer));
    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// banana
// kiwi
// lemo










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    in_file.read(buffer, sizeof(buffer));
    in_file.seekg(0);
    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// apple 5
// orange 10
// b










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    in_file.read(buffer, sizeof(buffer));
    in_file.seekg(0);
    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// apple 5
// orange 10










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    in_file.seekg(10);
    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// range 10
// banana
// kiw










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    in_file.seekg(10);
    in_file.read(buffer, sizeof(buffer));

    buffer[19] = 0;

    std::cout << buffer << std::endl;

    in_file.close();

    return 0;
}

// range 10
// banana
// k










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    in_file.read(buffer, sizeof(buffer));

    std::cout << in_file.tellg() << std::endl;     // 22

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    char buffer[20];

    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    in_file.read(buffer, sizeof(buffer));

    std::cout << in_file.tellg() << std::endl;     // 20

    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    char buffer[20];

    while (!in_file.eof())
    {
        in_file.read(buffer, sizeof(buffer) - 1);
        buffer[in_file.gcount()] = 0;
        std::cout << buffer;
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

    char buffer[20];

    while (!in_file.eof())
    {
        in_file.read(buffer, sizeof(buffer) - 1);
        buffer[in_file.gcount()] = 0;
        std::cout << buffer;
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

    char ch;

    while (!in_file.eof())
    {
        in_file.read(&ch, 1);
        std::cout << ch;
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

    char ch;

    while (!in_file.eof())
    {
        in_file.read(&ch, 1);
        std::cout << ch;
    }
   
    in_file.close();

    return 0;
}











#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt");

    std::string str;

    while (!in_file.eof())
    {
        std::getline(in_file, str);
        std::cout << str << '\n';
    }
   
    in_file.close();

    return 0;
}











#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream in_file;
    in_file.open("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary);

    std::string str;

    while (!in_file.eof())
    {
        std::getline(in_file, str);
        std::cout << str << '\n';
    }
   
    in_file.close();

    return 0;
}










#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << std::ifstream("C:\\Users\\Acer\\Desktop\\words.txt").rdbuf();
   
    return 0;
}










#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << std::ifstream("C:\\Users\\Acer\\Desktop\\words.txt", std::ios::binary).rdbuf();
   
    return 0;
}




















#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file;
    out_file.open("file.txt");

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file;
    out_file.open("file.txt", std::ios::binary);

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file_file_file.txt");

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file_file_file.txt", std::ios::binary);

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt");

    out_file << "Hello, world!\n";

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::binary);

    out_file << "Hello, world!\n";

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app);

    out_file << "Hello, world!\n";

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app, std::ios::binary);

    out_file << "Hello, world!\n";

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app);

    int number = 25;
    out_file << number << '\n';

    double temp = 25.5;
    out_file << temp << '\n';

    std::string greeting = "Hello!";
    out_file << greeting << '\n';

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app);

    std::string fruit = "orange";
    int number = 15;

    out_file << fruit << " " << number << '\n';

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app);

    out_file.setf(std::ios::showpos);

    double temp = 25.5;
    out_file << temp << '\n';

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app);

    out_file.setf(std::ios::boolalpha);

    bool light = true;
    out_file << light << '\n';

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app);

    out_file.setf(std::ios::showpoint);

    double temp = 20;

    out_file << temp << '\n';     // 20.0000

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt", std::ios::app);

    out_file.setf(std::ios::showpoint);
    out_file.precision(3);

    double temp = 20;

    out_file << temp << '\n';     // 20.0

    out_file.close();

    return 0;
}










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt");

    out_file.setf(std::ios::showpos);
    out_file.setf(std::ios::showpoint);
    out_file.precision(3);

    out_file << 10.5 << std::endl << 8.3 << std::endl << 0 << std::endl << -1.1 << std::endl << -2 << std::endl;

    out_file.close();

    return 0;
}

// +10.5
// + 8.30
// + 0
// - 1.10
// - 2










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt");

    out_file.setf(std::ios::showpos);
    out_file.setf(std::ios::showpoint);
    out_file.setf(std::ios::fixed);
    out_file.precision(1);

    out_file << 10.5 << std::endl << 8.3 << std::endl << 0 << std::endl << -1.1 << std::endl << -2 << std::endl;

    out_file.close();

    return 0;
}

// +10.5
// + 8.3
// + 0
// - 1.1
// - 2










#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out_file("file.txt");

    out_file.setf(std::ios::showpos);
    out_file.setf(std::ios::showpoint);
    out_file.setf(std::ios::fixed);
    out_file.precision(1);

    double temps[] = { 10.5, 8.3, 0, -1.1, -2 };
    const char* conditions[] = { "sunny", "cloudy", "windy", "snowy", "stormy" };

    for (int i = 0; i < 5; ++i)
    {
        out_file.width(5);
        out_file << temps[i];
        out_file.width(10);
        out_file << conditions[i] << std::endl;
    }

    out_file.close();

    return 0;
}

// +10.5     sunny
// + 8.3    cloudy
// + 0.0     windy
// - 1.1     snowy
// - 2.0    stormy
