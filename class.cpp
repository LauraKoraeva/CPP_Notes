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
#include <iostream>

class Point
{
private:
	double x, y, z;

public:
	Point(double inX = 0.0, double inY = 0.0, double inZ = 0.0)
		: x(inX), y(inY), z(inZ) { }

	friend std::ostream& operator<< (std::ostream& out, const Point& point);
};

std::ostream& operator<< (std::ostream& out, const Point& point)
{
	out << "Point(" << point.x << ", " << point.y << ", " << point.z << ")";
	return out;
}

int main()
{
	Point point(5.0, 6.0, 7.0);
	std::cout << point;

	return 0;
}










// Родительский и дочерний классы
#include <iostream>

class Parent
{
	int id;

public:
	Parent(int inID = 0) : id(inID) { }

	int getID() const { return id; }
};

class Child : public Parent
{
	double value;

public:
	Child(double inValue = 0.0, int inID = 0)
		: Parent(inID), value(inValue) { }

	double getValue() const { return value; }
};

int main()
{
	Child child(1.5, 7);
	std::cout << child.getID() << '\n';
	std::cout << child.getValue() << '\n';

	return 0;
}










// Порядок выполнения конструкторов и деструкторов при наследовании
#include <iostream>

class A
{
	int a;
public:
	A(int inA = 0) : a(inA) { std::cout << "A: " << a << '\n'; }
	int getA() const { return a; }
	~A() { std::cout << "A deleted\n"; }
};

class B : public A
{
	double b;
public:
	B(int inA, double inB) : A(inA), b(inB) { std::cout << "B: " << b << '\n'; }
	double getB() const { return b; }
	~B() { std::cout << "B deleted\n"; }
};

class C : public B
{
	char c;
public:
	C(int inA, double inB, char inC) : B(inA, inB), c(inC) { std::cout << "C: " << c << '\n'; }
	char getC() const { return c; }
	~C() { std::cout << "C deleted\n"; }
};

int main()
{
	C c(5, 7.5, 'L');

	return 0;
}










// Переопределение методов родительского класса
#include <iostream>

class Parent
{
protected:
	int value;

public:
	Parent(int inValue = 0) : value(inValue) { }

	void identify() { std::cout << "Parent\n"; }
};

class Child : public Parent
{
public:
	Child(int inValue) : Parent(inValue) { }

	void identify() { std::cout << "Child\n"; }
};

int main()
{
	Parent parent(5);
	parent.identify();

	Child child(7);
	child.identify();

	return 0;
}










// Расширение функционала родительских методов
#include <iostream>

class Parent
{
protected:
	int value;

public:
	Parent(int inValue = 0) : value(inValue) { }

	void identify() { std::cout << "Parent\n"; }
};

class Child : public Parent
{
public:
	Child(int inValue) : Parent(inValue) { }

	void identify()
	{
		Parent::identify();
		std::cout << "Child\n";
	}
};

int main()
{
	Parent parent(5);
	parent.identify();

	Child child(7);
	child.identify();

	return 0;
}










// Изменение спецификатора доступа с protected на public
#include <iostream>

class Parent
{
protected:
	int value;

public:
	Parent(int inValue = 0) : value(inValue) { }

private:
	void privatePrint() { std::cout << value << '\n'; }
protected:
	void protectedPrint() { std::cout << value << '\n'; }
public:
	void publicPrint() { std::cout << value << '\n'; }
};

class Child : public Parent
{
public:
	Child(int inValue) : Parent(inValue) { }

	using Parent::protectedPrint;
};

int main()
{
	Child child(5);
	child.publicPrint();
	child.protectedPrint();
}










// Изменение спецификатора доступа с public на protected
#include <iostream>

class Parent
{
public:
	int value;

	Parent(int inValue = 0) : value(inValue) { }

private:
	void privatePrint() { std::cout << value << '\n'; }
protected:
	void protectedPrint() { std::cout << value << '\n'; }
public:
	void publicPrint() { std::cout << value << '\n'; }
};

class Child : public Parent
{
public:
	Child(int inValue) : Parent(inValue) { }

	using Parent::protectedPrint;
protected:
	using Parent::value;
};

int main()
{
	Child child(5);
	// child.value = 7;     // Ошибка
	child.publicPrint();
	child.protectedPrint();
}










// DELETE
// Сокрытие родительского метода в дочернем классе
#include <iostream>

class Parent
{
	int value;

public:
	Parent(int inValue = 0) : value(inValue) { }

	int getValue() const { return value; }
};

class Child : public Parent
{
public:
	Child(int inValue) : Parent(inValue) { }

	int getValue() = delete;
};

int main()
{
	Child child(5);
	// std::cout << child.getValue();     // Ошибка
	
	Parent parent(7);
	std::cout << parent.getValue();

	return 0;
}










// Наследование и указатели, ссылки
#include <iostream>

class Parent
{
protected:
	int value;

public:
	Parent(int inValue = 0) : value(inValue) { }

	const char* getName() const { return "Parent"; }
	int getValue() const { return value; }
};

class Child : public Parent
{
public:
	Child(int inValue) : Parent(inValue) { }

	const char* getName() const { return "Child"; }
	int getValueDoubled() const { return value * 2; }
};

int main()
{
	Child ch(7);
	std::cout << ch.getName() << ": " << ch.getValue() << '\n';

	Child& chReference = ch;
	std::cout << chReference.getName() << ": " << chReference.getValue() << '\n';

	Child* chPointer = &ch;
	std::cout << chPointer->getName() << ": " << chPointer->getValue() << '\n';

	return 0;
}










// VIRTUAL     OVERRIDE
// Виртуальные функции
#include <iostream>

class Parent
{
public:
	virtual const char* getName() const { return "Parent"; }
};

class Child : public Parent
{
public:
	const char* getName() const override { return "Child"; }
};

int main()
{
	Child child;
	Parent& parent = child;
	std::cout << parent.getName();

	return 0;
}










// Виртуальные функции и указатели, ссылки на родительскую часть дочерних классов
#include <iostream>

class Parent
{
protected:
	int value;

public:
	Parent(int inValue = 0) : value(inValue) { }

	virtual const char* getName() const { return "Parent"; }
	int getValue() const { return value; }
};

class Child : public Parent
{
public:
	Child(int inValue) : Parent(inValue) { }

	const char* getName() const override { return "Child"; }
	int getValueDoubled() const { return value * 2; }
};

int main()
{
	Child child(7);
	std::cout << child.getName() << ": " << child.getValue() << '\n';

	Parent& pReference = child;
	std::cout << pReference.getName() << ": " << pReference.getValue() << '\n';

	Parent* pPointer = &child;
	std::cout << pPointer->getName() << ": " << pPointer->getValue() << '\n';

	return 0;
}










// Массив объектов класса
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string name;

	Animal(std::string inName) : name(inName) { }

public:
	std::string getName() const { return name; }

	virtual const char* speak() const { return "???"; }
};

class Dog : public Animal
{
public:
	Dog(std::string inName) : Animal(inName) { }

	const char* speak() const override { return "Woof"; }
};

void report(Animal& animal)
{
	std::cout << animal.getName() << ": " << animal.speak() << '\n';
}

int main()
{
	Dog dogs[] = { Dog("A"), Dog("B"), Dog("C"), Dog("D"), Dog("E") };

	for (int i = 0; i < 5; ++i)
	{
		report(dogs[i]);
	}

	return 0;
}










// Чистая виртуальная функция с определением вне тела класса
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string name;

public:
	Animal(std::string inName) : name(inName) { }

	std::string getName() const { return name; }

	virtual const char* speak() const = 0;
};

const char* Animal::speak() const { return "buzz"; }

class Dragonfly : public Animal
{
public:
	Dragonfly(std::string inName) : Animal(inName) { }

	const char* speak() const override
	{
		return Animal::speak();
	}
};

int main()
{
	Dragonfly dfly("D");
	std::cout << dfly.getName() << ": " << dfly.speak() << '\n';

	return 0;
}










// Виртуальный базовый класс
// Множественное наследование
#include <iostream>

class PoweredDevice
{
public:
	PoweredDevice(int inPower)
	{
		std::cout << "PoweredDevice: " << inPower << '\n';
	}
};

class Scanner : virtual public PoweredDevice
{
public:
	Scanner(int inScanner, int inPower)
		: PoweredDevice(inPower)
	{
		std::cout << "Scanner: " << inScanner << '\n';
	}
};

class Printer : virtual public PoweredDevice
{
public:
	Printer(int inPrinter, int inPower)
		: PoweredDevice(inPower)
	{
		std::cout << "Printer: " << inPower << '\n';
	}
};

class Copier : public Scanner, public Printer
{
public:
	Copier(int inScanner, int inPrinter, int inPower)
		: Scanner(inScanner, inPower),
		Printer(inPrinter, inPower),
		PoweredDevice(inPower)
	{
	}
};

int main()
{
	Copier copier(1, 2, 3);

	return 0;
}
