//
// Created by Rinat Nurutdinow on 3/4/21.
//

#include <iostream>
#include <string>

int 	main(void)
{
	std::string		source_str = "HI THIS IS BRAIN";
	std::string*	pointer_to_str = &source_str;
	std::string&	reference_to_str = source_str;

	std::cout	<< "Pointer to string. Output:" << std::endl << *pointer_to_str
				<< std::endl
				<< "Reference to string. Output:" << std::endl << reference_to_str
				<< std::endl;
	return 0;
}