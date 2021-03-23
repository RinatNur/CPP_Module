//
// Created by Rinat Nurutdinow on 3/22/21.
//

#ifndef DAY05_BUREAUCRAT_HPP
#define DAY05_BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:

	const std::string 	szName_;
	int 				nGrade_;

public:

	Bureaucrat(const std::string& szName, int nGrade);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	virtual ~Bureaucrat();

	class GradeTooHighException : public std::exception{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		virtual const char* what() const throw();
	};
	std::string 		getName() const;
	int					getGrade() const;
	void 				incrementGrade();
	void 				decrementGrade();
	void 				signForm(Form& form);
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj);

#endif //DAY05_BUREAUCRAT_HPP
