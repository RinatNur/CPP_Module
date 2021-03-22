//
// Created by Rinat Nurutdinow on 3/22/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &szName, int nGrade)
		: szName_(szName), nLowestGrade_(150), nHighestGrade_(1){
	this->nGrade_ = nGrade;
}

Bureaucrat::~Bureaucrat() {

}
