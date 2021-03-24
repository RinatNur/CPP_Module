//
// Created by Rinat Nurutdinow on 3/23/21.
//

#ifndef DAY05_ROBOTOMYREQUESTFORM_HPP
#define DAY05_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string 	szTarget_;
public:

	RobotomyRequestForm(const std::string& szTarget);
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();

	void		executeAction(const Bureaucrat& bureaucrat) const;

};


#endif //DAY05_ROBOTOMYREQUESTFORM_HPP
