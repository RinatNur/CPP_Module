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
	std::cout << "End of the program!" << std::endl;
	return 0;
}