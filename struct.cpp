include <iostream>

// Создание структуры
struct Date
{
    int day;
    int month;
    int year;
};


void print(Date& date)     // передача структуры в функцию по ссылке
{
    // доступ к элементам структуры
    std::cout << today.day << "/" << today.month << "/" << today.year << '\n';
}


int main()
{
    // Инициализация структуры
    Date today { 10, 11, 2005 };     // uniform-инициализация

    today.day = 11;

    print(today);     // передача структуры в функцию по ссылке

}


