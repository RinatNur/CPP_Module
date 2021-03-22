//
// Created by Rinat Nurutdinow on 3/22/21.
//

#ifndef DAY05_BUREAUCRAT_HPP
#define DAY05_BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:

	const std::string 	szName_;
	int 				nGrade_;
	const int 			nLowestGrade_;
	const int 			nHighestGrade_;

public:

	Bureaucrat(const std::string& szName, int nGrade);
	virtual ~Bureaucrat();
};


#endif //DAY05_BUREAUCRAT_HPP
