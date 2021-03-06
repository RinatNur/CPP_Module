//
// Created by Rinat Nurutdinow on 3/4/21.
//

#include <iostream>
#include "Human.hpp"

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}