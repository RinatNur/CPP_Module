//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &szName, int nGrade)
		: szName_(szName){
	if (nGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (nGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->nGrade_ = nGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy_obj) {
	operator=(copy_obj);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj_to_assign) {
	if (this == &obj_to_assign)
		return *this;
	*(const_cast<std::string*>(&szName_)) = obj_to_assign.szName_;;
	this->nGrade_ = obj_to_assign.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const {
	return this->szName_;
}

int Bureaucrat::getGrade() const {
	return this->nGrade_;
}

void Bureaucrat::incrementGrade() {
	if (nGrade_ - 1 == 0)
		throw Bureaucrat::GradeTooHighException();
	this->nGrade_--;
}

void Bureaucrat::decrementGrade() {
	if (nGrade_ + 1 == 151)
		throw Bureaucrat::GradeTooLowException();
	this->nGrade_++;
}

void Bureaucrat::signForm(Form &form) {
	if (this->getGrade() <= form.getGradeToSign()) {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << ".\n";
	}
	else
		std::cout << this->getName() << " cannot sign " << form.getName()
			  << " because he is too young.\n";
}

void Bureaucrat::executeForm(const Form &form) const{
	form.execute(*this);
	std::cout << this->getName() << " executes " << form.getName() << ".\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low.";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high.";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return o;
}
