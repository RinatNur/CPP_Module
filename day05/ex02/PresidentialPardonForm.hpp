//
// Created by Rinat Nurutdinow on 3/23/21.
//

#ifndef DAY05_PRESIDENTIALPARDONFORM_HPP
#define DAY05_PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string 	szTarget_;
public:

	PresidentialPardonForm(const std::string& szTarget);
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();

	void		executeAction(const Bureaucrat& bureaucrat) const;

};


#endif //DAY05_PRESIDENTIALPARDONFORM_HPP
