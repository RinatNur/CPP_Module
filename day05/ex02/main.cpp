//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int 	main()
{
	printHeader("DAY 05, EX 01");
	std::cout << std::endl;

	try {
		Bureaucrat deputat("Timur", 1);
		Form list("list", 11, 25);
		Form declaration("declaration", 5, 25);
		RobotomyRequestForm robotomyForm("Tool");
		PresidentialPardonForm pardonForm("Shamil");
		ShrubberyCreationForm sform("office");

		printHeader("Bureaucrat signs different forms");
		deputat.signForm(list);
		list.execute(deputat);
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
		Bureaucrat new_deputat("Adam", 150);
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
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try{
		printHeader("Deputat with low grade try to execute RobotomyRequestForm");
		Bureaucrat		new_deputat1("Adam", 1);
		Bureaucrat		new_deputat2("Adam", 150);
		RobotomyRequestForm robotomyForm("Tool");
		new_deputat1.signForm(robotomyForm);
		new_deputat2.executeForm(robotomyForm);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}