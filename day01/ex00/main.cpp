//
// Created by Rinat Nurutdinow on 3/1/21.
//

#include <iostream>
#include "Pony.hpp"

int 	main(void)
{
	Pony::ponyOnTheHeap();
	std::cout << std::endl;
	Pony::ponyOnTheStack();

	return 0;
}