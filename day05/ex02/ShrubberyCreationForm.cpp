//
// Created by Rinat Nurutdinow on 3/23/21.
//

#include "ShrubberyCreationForm.hpp"

void printHeader(std::string header)
{
	std::cout	<< "\033[1;36m"
				 << "<<<<< "
				 << header
				 << " >>>>>"
				 << "\033[0m"
				 << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& szTarget)
		: Form("ShrubberyCreationForm", 25, 5), szTarget_(szTarget){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy_obj)
		: Form(copy_obj.getName(), copy_obj.getGradeToSign(), copy_obj.getGradeToExecute()){
	operator=(copy_obj);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj_to_assign) {
	if (this == &obj_to_assign)
		return *this;
	this->szTarget_ = obj_to_assign.szTarget_;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::ofstream 	ofs;
	std::string		szFileName = this->szTarget_ + "_shrubbery";
	ofs.open(szFileName);
	ofs <<  "                  $                  \n"
		<<	"                 #$#                 \n"
		<<	"                ##$##                \n"
		<<	"                 #$#                 \n"
		<<	"              ####$####              \n"
		<<	"             #####$#####             \n"
		<<	"                ##$##                \n"
		<<	"           #######$#######           \n"
		<<	"          ########$########          \n"
		<<	"               ###$###               \n"
		<<	"        ##########$##########        \n"
		<<	"       ###########$###########       \n"
		<<	"               ###$###               \n"
		<<	"     #############$#############     \n"
		<<	"    ##############$##############    \n"
		<<	"             #####$#####             \n"
		<<	"  ################$################  \n"
		<<	"          ########$#######           \n"
		<<	"##################$##################\n"
		<<	"           #######$#######           \n"
		<<	"           #######$#######           \n"
		<<	"           #######$#######           \n"
		<<	"           #######$#######           \n"
		<<	"           #######$#######           \n";
	ofs.close();
}
