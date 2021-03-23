//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

//void printHeader(std::string header)
//{
//	std::cout	<< "\033[1;35m"
//				 << "<<<<< "
//				 << header
//				 << " >>>>>"
//				 << "\033[0m"
//				 << std::endl;
//}

int 	main()
{
	printHeader("DAY 05, EX 01");
	std::cout << std::endl;

	try {
		Bureaucrat		deputat("Timur", 1);
		Form	list("list", 11, 25);
		Form	declaration("declaration", 5, 25);
		RobotomyRequestForm robotomyForm("Tool");
		PresidentialPardonForm	pardonForm("Shamil");
		ShrubberyCreationForm sform("office");

		printHeader("Bureaucrat signs different forms");
		deputat.signForm(list);
		deputat.signForm(robotomyForm);
		deputat.signForm(pardonForm);
		deputat.signForm(sform);

		printHeader("Bureaucrat executes different forms");
		deputat.executeForm(list);
		deputat.executeForm(robotomyForm);
		deputat.executeForm(pardonForm);
		deputat.executeForm(sform);
		std::cout << std::endl;

		//sign with low gradde
		Bureaucrat		new_deputat("Adam", 150);
		printHeader("Deputat with low grade try to sign list");
		new_deputat.signForm(list);

		printHeader("Deputat with low grade try to sign RobotomyRequestForm");
		new_deputat.signForm(robotomyForm);

		printHeader("Deputat with low grade try to sign PresidentialPardonForm");
		new_deputat.signForm(pardonForm);

		printHeader("Deputat with low grade try to sign ShrubberyCreationForm");
		new_deputat.signForm(sform);
		std::cout << std::endl;

		//execute with low gradde
		printHeader("Deputat with low grade try to execute list");
		new_deputat.executeForm(list);

		Bureaucrat		new_deputat2("Adam", 150);
		printHeader("Deputat with low grade try to execute RobotomyRequestForm");
		new_deputat2.executeForm(robotomyForm);


		printHeader("Deputat with low grade try to execute PresidentialPardonForm");
		new_deputat.executeForm(pardonForm);

		printHeader("Deputat with low grade try to execute ShrubberyCreationForm");
		new_deputat.executeForm(sform);
		std::cout << std::endl;


//		robotomyForm.execute(deputat);
//		deputat.executeForm(sform);
//		sform.execute(deputat);
//		printHeader("Bureaucrat sign form");
////
//		printHeader("Bureaucrat's grade is low to sign form");
//		deputat.signForm(declaration);
//
//		printHeader("Form beSigned");
//		list.beSigned(deputat);
//		std::cout << "List isSigned = " << list.getIsSigned() << std::endl;
//
//		printHeader("Form beSigned gradde is not enough");
//		declaration.beSigned(deputat);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}