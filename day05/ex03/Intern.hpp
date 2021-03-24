//
// Created by Rinat Nurutdinow on 3/24/21.
//

#ifndef DAY05_INTERN_HPP
#define DAY05_INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:

	Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);
	virtual ~Intern();

class FormIsNotFound : public std::exception{
public:
	const char* what() const throw();
};
	Form* 	makeForm(const std::string&, const std::string&);

private:

	Form*	form_arr_[3];

};


#endif //DAY05_INTERN_HPP
