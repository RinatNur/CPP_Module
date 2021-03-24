//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int 	main()
{
	Intern someRandomIntern;
	Form* rrf;
	try {
		Bureaucrat	deputat("Ostap", 1);
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
//		rrf->beSigned(deputat);
		deputat.signForm(*rrf);
		deputat.executeForm(*rrf);
//		rrf.t
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}