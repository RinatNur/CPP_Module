//
// Created by Rinat Nurutdinow on 3/23/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& szTarget)
		: Form("RobotomyRequestForm", 72, 45), szTarget_(szTarget){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy_obj)
		: Form(copy_obj.getName(), copy_obj.getGradeToSign(), copy_obj.getGradeToExecute()){
	operator=(copy_obj);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj_to_assign) {
	if (this == &obj_to_assign)
		return *this;
	this->szTarget_ = obj_to_assign.szTarget_;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << this->szTarget_ << " has been robotomized successfully 50% of the time.\n";
}