//
// Created by Rinat Nurutdinow on 3/26/21.
//

#include <iostream>
#include <typeinfo>

//TODO change to dynamic cast
//TODO Makefile

class Base {
public:

	virtual ~Base() {};

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	int 	num = rand() % 3;
	if (num == 1)
		return (new A);
	if (num == 2)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base * p)
{
	if((typeid(A) == typeid(*p)))
		std::cout << "A\n";
	else if((typeid(B) == typeid(*p)))
		std::cout << "B\n";
	else if((typeid(C) == typeid(*p)))
		std::cout << "C\n";
}

void identify_from_reference(Base & p)
{
	if((typeid(A) == typeid(p)))
		std::cout << "A\n";
	else if((typeid(B) == typeid(p)))
		std::cout << "B\n";
	else if((typeid(C) == typeid(p)))
		std::cout << "C\n";
}

int main()
{
	srand(time(NULL));

	Base*	base;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;

	return 0;
}