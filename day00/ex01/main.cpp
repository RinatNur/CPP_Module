#include <iostream>
#include "contact.class.hpp"

int		main()
{
	std::vector<Contact>		phonebook;
	std::string 				command;
	for(;;)
	{
		std::cout << "Please enter command ADD or SEARCH or EXIT: ";
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			for(int i = 0; i < 11; i++)
			{
				phonebook[i].GetValue(phonebook[i], );
				std::cout << "Enter name: ";
				getline(std::cin, phonebook[i].first_name);



			}
			getline(std::cin, name);
		}
	}

}

