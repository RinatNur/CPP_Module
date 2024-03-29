//
// Created by Rinat Nurutdinow on 3/23/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& szTarget)
		: Form("presidential pardon", 25, 5), szTarget_(szTarget){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy_obj)
	: Form(copy_obj.getName(), copy_obj.getGradeToSign(), copy_obj.getGradeToExecute()){
	operator=(copy_obj);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj_to_assign) {
	if (this == &obj_to_assign)
		return *this;
	this->szTarget_ = obj_to_assign.szTarget_;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::executeAction(const Bureaucrat& bureaucrat) const {
	bureaucrat.getName();
	std::cout << this->szTarget_ << " has been pardoned by Zafod Beeblebrox\n";
}
