//
// Created by Rinat Nurutdinow on 3/22/21.
//

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:

	const std::string 	szName_;
	const int 			nGradeToSign_;
	const int 			nGradeToExecute_;
	bool 				isSigned_;

public:

	Form(const std::string& szName, int, int);
	Form(const Form&);
	Form& operator=(const Form&);
	virtual ~Form();

	class GradeTooHighException : public std::exception{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{
	public:
		virtual const char* what() const throw();
	};

	class FormUnsignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	std::string 		getName() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	bool 				getIsSigned() const;
	void 				beSigned(const Bureaucrat& bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const;
	virtual void		executeAction(const Bureaucrat& bureaucrat) const = 0;

};

std::ostream& operator<<(std::ostream& o, const Form& obj);

#endif //FORM_HPP
