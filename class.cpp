// Спецификаторы доступа: PUBLIC     PRIVATE     PROTECTED
#include <iostream>
// Создание класса 
class Date
{
private:
    int day;
    int month;
    int year;

public:
    //определение метода класса
    void print()
    {
        std::cout << day << "/" << month << "/" << year << '\n';
    }
};

int main()
{
    // Инициализация объекта класса
    Date today { 10, 11, 2005 }; // если переменные-члены объявлены public

    //доступ к членам и методам класса через оператор выбора членов (.)
    today.day = 11;
    today.print();
}











// const char* class example 
#include <iostream>

class MyString
{
	const char* myString;
	int length;

public:
	void setMyString(const char* inString)
	{
		myString = inString;
		length = strlen(myString);
	}

	void printString()
	{
		std::cout << myString << '\n';
		std::cout << length << '\n';
	}
};

int main()
{
	MyString str;
	str.setMyString("Hello");
	str.printString();
}










// array[] class example
#include <iostream>

class MyArray
{
private:
	int myArray[10];

public:
	void setValue(int index, int value)
	{
		if (index < 0 || index >= 10)
			return;
		else
			myArray[index] = value;
	}

	void printValue(int index)
	{
		if (index < 0 || index >= 10)
			return;
		else
			std::cout << myArray[index] << '\n';
	}

};

int main()
{
	MyArray arr;
	arr.setValue(5, 7);
	arr.printValue(5);

	return 0;
}










// геттеры и сеттеры
#include <iostream>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	void setDay(int inDay) { day = inDay; }
	int getDay() { return day; }

	void setMonth(int inMonth) { month = inMonth; }
	int getMonth() { return month; }

	void setYear(int inYear) { year = inYear; }
	int getYear() { return year; }
};

int main()
{
	Date date;
	date.setDay(10);
	date.setMonth(7);
	date.setYear(2015);

	std::cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << '\n';

	return 0;
}










// инициализация переменных-членов, объявленных public
#include <iostream>

class Numbers
{
public:
	int number1;
	int number2;
};

int main()
{
	Numbers numbers1 = { 5, 7 }; // список инициализаторов
	Numbers numbers2{ 7, 5 }; // uniform-инициализация
}










// КОНСТРУКТОРЫ

// Конструктор по умолчанию
#include <iostream>

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	// конструктор по умолчанию
	Fraction()
	{
		numerator = 0;
		denominator = 1;
	}

	int getNumerator() { return numerator; }
	int getDenominator() { return denominator; }
};

int main()
{
	Fraction fraction;
	std::cout << fraction.getNumerator() << "/" << fraction.getDenominator() << '\n';

	return 0;
}










// конструктор с параметрами
#include <iostream>
#include <cassert>

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	// конструктор с параметрами
	Fraction(int inNumerator, int inDenominator = 1) // один параметр по умолчанию
	{
		assert(denominator != 0);
		numerator = inNumerator;
		denominator = inDenominator;
	}

	int getNumerator() { return numerator; }
	int getDenominator() { return denominator; }
};

int main()
{
	Fraction fraction1(5, 7); // прамая инициализация
	std::cout << fraction1.getNumerator() << "/" << fraction1.getDenominator() << '\n';

	Fraction fraction2{ 7, 5 }; // uniform-инициализация
	std::cout << fraction2.getNumerator() << "/" << fraction2.getDenominator() << '\n';

	return 0;
}











// Конструкторы
#include <iostream>

class Ball
{
	std::string colour;
	double radius;

public:
	Ball(std::string inColour = "white", double inRadius = 25.0)
	{
		colour = inColour;
		radius = inRadius;
	}

	Ball(double inRadius) : Ball("white", inRadius)
	{
		// Ball("white", inRadius) не работает
	}

	void print()
	{
		std::cout << "colour: " << colour << ", radius: " << radius << '\n';
	}
};

int main()
{
	Ball ball;
	ball.print();

	Ball green("green");
	green.print();

	Ball fifty(50.0);
	fifty.print();

	Ball redFifty("black", 50.0);
	redFifty.print();

	return 0;
}









// Конструкторы
#include <iostream>
#include <string>

class Ball
{
private:
	std::string colour = "white";
	double radius = 20.0;

public:
	Ball() { }

	Ball(std::string inColour, double inRadius) 
		: colour(inColour), radius(inRadius) { }

	Ball(std::string inColour) : colour(inColour) { }

	Ball(double inRadius) :  radius(inRadius) { }

	void print()
	{
		std::cout << "colour: " << colour << " and radius: " << radius << '\n';
	}
	
};

int main()
{
	Ball ball1;
	ball1.print();

	Ball ball2("green");
	ball2.print();

	Ball ball3(30.0);
	ball3.print();

	Ball ball4("green", 30.0);
	ball4.print();
}











// Список инициализации членов
#include <iostream>

class Values
{
private:
	int value1;
	double value2;
	char value3;

public:
	Values() : value1(5), value2(7.5), value3('L') { }  // или : value1{ 5 }, value2{ 7.5 }, value3{ 'L' }

	void print()
	{
		std::cout << "Values(" << value1 << ", " << value2 << ", " <<
			value3 << ")\n";
	}
};

int main()
{
	Values value;
	value.print();

	return 0;
}










// список инициализации членов с параметрами
#include <iostream>

class Values
{
private:
	int value1;
	double value2;
	char value3;

public:
	Values(int inValue1, double inValue2, char inValue3) 
		: value1(inValue1), value2(inValue2), value3(inValue3) 
	{
	}

	void print()
	{
		std::cout << "Values(" << value1 << ", " << value2 << ", " <<
			value3 << ")\n";
	}
};

int main()
{
	Values value(5, 7.5, 'L');
	value.print();

	return 0;
}










// Инициализация массива 
#include <iostream>

class Values
{
private:
	const int arr[5];

public:
	Values() : arr{ 1, 2, 3, 4, 5 } // uniform-инициализация массива
	{
	}
};










// Динамическое выделение памяти и деструкторы
#include <iostream>
#include <cassert>

class Massiv
{
private:
	int* arr;
	int length;

public:
	Massiv(int inLength)
	{
		assert(inLength > 0);
		arr = new int[inLength];
		length = inLength;
	}

	~Massiv()
	{
		delete[] arr;
	}
};










// Цепочка методов класса, указатель *this
#include <iostream>

class Math
{
	int value;

public:
	Math() { value = 0; }

	Math& add(int inValue) { value += inValue; return *this; }
	Math& sub(int inValue) { value -= inValue; return *this; }
	Math& multiply(int inValue) { value *= inValue; return *this; }

	int getValue() { return value; }
};

int main()
{
	Math operation;
	operation.add(7).sub(5).multiply(3);

	std::cout << operation.getValue() << '\n';

	return 0;
}










// Определение методов класса вне тела класса
class Date
{
	int day;
	int month;
	int year;

public:
	Date(int inDay, int inMonth, int inYear);

	void setDate(int inDay, int inMonth, int inYear);

	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }
};

Date::Date(int inDay, int inMonth, int inYear)
{
	setDate(inDay, inMonth, inYear);
}

void Date::setDate(int inDay, int inMonth, int inYear)
{
	day = inDay;
	month = inMonth;
	year = inYear;
}










// Классы и заголовочные файлы
// date.h

#pragma once

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(int inDay, int inMonth, int inYear);

	void setDate(int inDay, int inMonth, int inYear);

	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }
};

// date.cpp

#include "date.h"

Date::Date(int inDay, int inMonth, int inYear)
{
	setDate(inDay, inMonth, inYear);
}

void Date::setDate(int inDay, int inMonth, int inYear)
{
	day = inDay;
	month = inMonth;
	year = inYear;
}










// CONST
#include <iostream>

class Anything
{
public:
	int value;

	Anything() { value = 0; }

	void resetValue() { value = 0; }
	void setValue(int inValue) { value = inValue; }

	int getValue() const;
};

int Anything::getValue() const { return value; }

int main()
{
	Anything thing;
	thing.setValue(5);
	std::cout << thing.getValue();

	return 0;
}










// передача константной ссылки
#include <iostream>

class Date
{
	int day;
	int month;
	int year;

public:
	Date(int inDay, int inMonth, int inYear)
	{
		setDate(inDay, inMonth, inYear);
	}

	void setDate(int inDay, int inMonth, int inYear)
	{
		day = inDay;
		month = inMonth;
		year = inYear;
	}

	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }

};

void printDate(const Date& date)
{
	std::cout << date.getDay() << "/" << 
		date.getMonth() << "/" << date.getYear() << '\n';
}

int main()
{
	Date date(5, 7, 2015);
	printDate(date);

	return 0;
}









// STATIC
// Статическая переменная-член
#include <iostream>

class Value
{
public:
	static int value;
};

int Value::value = 5;

int main()
{
	Value first;
	Value second;

	first.value = 7;

	std::cout << first.value << '\n';
	std::cout << second.value << '\n';

	return 0;
}










// Доступ к статическому public члену класса без объекта
#include <iostream>

class Value
{
public:
	static int value;
};

int Value::value = 5;

int main()
{
	Value::value = 7;
	std::cout << Value::value << '\n';

	return 0;
}










// Инициализация статических членов внутри тела класса 
// (констанный интегральный тип (char, bool, int и т.д.)
// или константное перечисление)
// все constexpr
#include <iostream>
#include <array>

class Anything
{
public:
	static const int value = 5;
	
	static constexpr std::array<int, 5> arr = { 1, 2, 3, 4, 5 };
};










// Статический метод
#include <iostream>

class Value
{
private:
	static int value;

public:
	static int getValue() { return value; }
};

int Value::value = 5;

int main()
{
	std::cout << Value::getValue() << '\n';
}










// Определение статического метода вне тела класса
#include <iostream>

class IDGenerator
{
	static int nextID;

public:
	static int getNextID();
};

int IDGenerator::nextID = 1;

int IDGenerator::getNextID() { return nextID++; }

int main()
{
	for (int count = 0; count < 5; ++count)
	{
		std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';
	}

	return 0;
}










// Инициализации статической переменной-члена выполнением кода
#include <iostream>
#include <vector>

class Something
{
private:
	static std::vector<char> myChars;

public:


	class Nested
	{
	public:
		Nested()
		{
			myChars.push_back('h');
			myChars.push_back('e');
			myChars.push_back('l');
			myChars.push_back('l');
			myChars.push_back('o');
		}
	};


	static void getSomething()
	{
		for (const auto& element : myChars)
			std::cout << element;
	}


private:
	static Nested initializer;


};


std::vector<char> Something::myChars;

Something::Nested Something::initializer;


int main()
{
	Something::getSomething();

	return 0;
}










// Анонимный объект
#include <iostream>

class Dollars
{
private:
	int dollars;

public:
	Dollars(int inDollars) { dollars = inDollars; }

	int getDollars() const { return dollars; }
};

void print(const Dollars& dollars)
{
	std::cout << dollars.getDollars() << " dollars.";
}

int main()
{
	print(Dollars(7));  // анонимный объект

	return 0;
}










// Вложенные типы данных
// enum
#include <iostream>

class Fruit
{
public: 
	enum FruitList
	{
		AVOCADO,
		BLACKBERRY,
		LEMON,
	};

private:
	FruitList type;

public:
	Fruit(FruitList inType) : type(inType) { }

	FruitList getType() const { return type; }
};

int main()
{
	Fruit avocado(Fruit::AVOCADO);

	if (avocado.getType() == Fruit::AVOCADO)
		std::cout << "avocado\n";
	else
		std::cout << "not avocado\n";

	return 0;
}










// FRIEND
// Дружественные функции

