//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Form.hpp"

Form::Form(std::string szName, int nGradeToSign, int nGradeToExecute)
	: szName_(szName), nGradeToSign_(nGradeToSign), nGradeToExecute_(nGradeToExecute){

	if (nGradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (nGradeToSign < 1)
		throw Form::GradeTooHighException();

	if (nGradeToExecute > 150)
		throw Form::GradeTooLowException();
	else if (nGradeToExecute < 1)
		throw Form::GradeTooHighException();

	this->isSigned_ = false;
}

Form::~Form() {}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low.";
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high.";
}

std::string Form::getName() const {
	return this->szName_;
}

int Form::getGradeToSign() const {
	return this->nGradeToSign_;
}

int Form::getGradeToExecute() const {
	return this->nGradeToExecute_;
}

bool Form::getIsSigned() const {
	return this->isSigned_;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->nGradeToSign_)
		throw Form::GradeTooLowException();
	isSigned_ = true;
}

std::ostream& operator<<(std::ostream& o, const Form& obj)
{
	o << "Form name " << obj.getName() << ", bureaucrat grade to sign "
		<< obj.getGradeToSign() << ", grade to execute "
		<< obj.getGradeToExecute() << ".";
	return o;
}
