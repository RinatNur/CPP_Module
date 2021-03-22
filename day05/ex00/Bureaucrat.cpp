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
