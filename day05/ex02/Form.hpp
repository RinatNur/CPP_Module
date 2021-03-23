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

	Form(std::string szName, int, int);
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

	std::string 		getName() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	bool 				getIsSigned() const;
	void 				beSigned(const Bureaucrat& bureaucrat);

};

std::ostream& operator<<(std::ostream& o, const Form& obj);

#endif //FORM_HPP
