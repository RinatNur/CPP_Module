//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Bureaucrat.hpp"

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
	printHeader("DAY 05, EX 00");
	std::cout << std::endl;
	try {
		Bureaucrat		deputat("Vasya", 5);
		std::cout << deputat << std::endl;
		printHeader("Bureaucrat class assign");
		Bureaucrat		bure("Bill", 120);
		bure = deputat;
		std::cout << bure << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	printHeader("Trying to add grade 0");
	try{
		Bureaucrat		deputat("Vasya", 0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	printHeader("Trying to add grade 151");
	try{
		Bureaucrat		deputat("Vasya", 151);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try{
		Bureaucrat		deputat("Vasya", 13);
		printHeader("operator \"<<\"");
		std::cout << deputat << std::endl;

		printHeader("getName");
		std::cout << "Name = " << deputat.getName() << std::endl;

		printHeader("getGrade");
		std::cout << "Grade = " << deputat.getGrade() << std::endl;

		printHeader("decrement");
		deputat.decrementGrade();
		std::cout << "Grade = " << deputat.getGrade() << std::endl;

		printHeader("increment");
		deputat.incrementGrade();
		std::cout << "Grade = " << deputat.getGrade() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}