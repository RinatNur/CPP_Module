//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Form.hpp"

Form::Form(const std::string& szName, int nGradeToSign, int nGradeToExecute)
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

Form::Form(const Form &copy_obj)
		: nGradeToSign_(copy_obj.nGradeToSign_), nGradeToExecute_(copy_obj.nGradeToExecute_){
	operator=(copy_obj);
}

Form &Form::operator=(const Form &obj_to_assign) {
	if (this == &obj_to_assign)
		return *this;
	*(const_cast<std::string*>(&szName_)) = obj_to_assign.szName_;;
	*(const_cast<int*>(&nGradeToSign_)) = obj_to_assign.nGradeToSign_;;
	*(const_cast<int*>(&nGradeToExecute_)) = obj_to_assign.nGradeToExecute_;;
	this->isSigned_ = obj_to_assign.isSigned_;
	return *this;
}

Form::~Form() {}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low.";
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high.";
}

const char *Form::FormUnsignedException::what() const throw() {
	return "Form is not signed.";
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

void Form::execute(const Bureaucrat &executor) const {
	if (!this->isSigned_)
		throw FormUnsignedException();
	if (executor.getGrade() > nGradeToExecute_)
		throw GradeTooLowException();
	this->executeAction(executor);
}

std::ostream& operator<<(std::ostream& o, const Form& obj)
{
	o << "Form name " << obj.getName() << ", bureaucrat grade to sign "
		<< obj.getGradeToSign() << ", grade to execute "
		<< obj.getGradeToExecute() << ".";
	return o;
}
