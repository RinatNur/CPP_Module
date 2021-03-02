//
// Created by Rinat Nurutdinow on 3/2/21.
//

#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	memoryLeak();
	return 0;
}
