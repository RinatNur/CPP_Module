//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

//TODO add some tests and check all program

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				 << "<<<<< "
				 << header
				 << " >>>>>"
				 << "\033[0m"
				 << std::endl;
}

int 	main()
{
	printHeader("DAY 05, EX 01");
	std::cout << std::endl;

	try {
		Bureaucrat		deputat("Maga", 10);
		Form	list("list", 11, 25);
		Form	declaration("declaration", 5, 25);

		printHeader("Bureaucrat sign form");
		deputat.signForm(list);

		printHeader("Bureaucrat's grade is low to sign form");
		deputat.signForm(declaration);

		printHeader("Form beSigned");
		declaration.beSigned(deputat);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}