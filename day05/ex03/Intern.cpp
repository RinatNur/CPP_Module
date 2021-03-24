//
// Created by Rinat Nurutdinow on 3/24/21.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy_obj) {
	operator=(copy_obj);
}

Intern &Intern::operator=(const Intern &obj_to_assign) {
	if (this != &obj_to_assign)
		return *this;
	return *this;
}

Intern::~Intern() {}

const char *Intern::FormIsNotFound::what() const throw() {
	return "Form is not found in the source.";
}

Form* Intern::makeForm(const std::string &formName, const std::string &target) {
	form_arr_[0] = new PresidentialPardonForm(target);
	form_arr_[1] = new RobotomyRequestForm(target);
	form_arr_[2] = new ShrubberyCreationForm(target);

	for(int i = 0; i < 3; ++i)
	{
		if (form_arr_[i]->getName() != formName) {
			delete form_arr_[i];
			form_arr_[i] = nullptr;
		}
	}
	for(int i = 0; i < 3; ++i)
	{
		if (form_arr_[i] != nullptr) {
			std::cout << "Intern creates " << form_arr_[i]->getName() << ".\n";
			return form_arr_[i];
		}
	}
	throw FormIsNotFound();
}
