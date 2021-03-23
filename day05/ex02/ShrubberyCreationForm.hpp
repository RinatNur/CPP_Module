//
// Created by Rinat Nurutdinow on 3/23/21.
//

#ifndef DAY05_SHRUBBERYCREATIONFORM_HPP
#define DAY05_SHRUBBERYCREATIONFORM_HPP


#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
	std::string 	szTarget_;
public:

	ShrubberyCreationForm(const std::string& szTarget);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
	virtual ~ShrubberyCreationForm();

	void 			printTreeInFile(const std::string&);
	void		execute(Bureaucrat const & executor) const;

};

void printHeader(std::string header);

#endif //DAY05_SHRUBBERYCREATIONFORM_HPP
