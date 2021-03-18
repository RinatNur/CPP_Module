//
// Created by Rinat Nurutdinow on 3/17/21.
//

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>
#include <string>

class Victim {
public:
	Victim(const std::string& szName);
	Victim(const Victim& copy_obj);
	virtual ~Victim();

	Victim&				operator=(const Victim& objToAssign);
	void				salutation() const;
	std::string			getName() const;
	void				setName(const std::string& szName);
	virtual void		getPolymorphed() const;

protected:
	std::string 	szName_;
};

std::ostream&		operator<<(std::ostream& o, const Victim& obj);

#endif //VICTIM_H
