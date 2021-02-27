#include <iostream>
#include "phonebook.class.hpp"

int		main()
{
	std::string 				command;
	Phonebook					ph_book;
	std::cout << "**********CRAPPY AWESOME PHONEBOOK**********" << std::endl;
	while(1)
	{
		std::cout << "Please enter command ADD or SEARCH or EXIT: " << std::endl;
		std::cout << ">> ";
		getline(std::cin, command);
//		if (std::cin.eof())
//			return 0;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			ph_book.AddContact();
		else if (command == "SEARCH")
			ph_book.Search();
	}
	return 0;
}

