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

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				 << "<<<<< "
				 << header
				 << " >>>>>"
				 << "\033[0m"
				 << std::endl;
}

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
	if(!(dynamic_cast<A*>(p) == nullptr))
		std::cout << "A\n";
	else if(!(dynamic_cast<B*>(p) == nullptr))
		std::cout << "B\n";
	else if(!(dynamic_cast<C*>(p) == nullptr))
		std::cout << "C\n";
}

void identify_from_reference(Base & p)
{
	if(!(dynamic_cast<A*>(&p) == nullptr))
		std::cout << "A\n";
	else if(!(dynamic_cast<B*>(&p) == nullptr))
		std::cout << "B\n";
	else if(!(dynamic_cast<C*>(&p) == nullptr))
		std::cout << "C\n";
	//second solution
//	identify_from_pointer(&p);
}

int main()
{
	srand(time(NULL));

	Base*	base;

	base = generate();
	printHeader("Identify from pointer");
	identify_from_pointer(base);

	printHeader("Identify from reference");
	identify_from_reference(*base);
	delete base;

	return 0;
}