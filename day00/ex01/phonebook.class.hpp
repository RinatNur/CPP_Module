#ifndef CPP_PHONEBOOK_CLASS_H
#define CPP_PHONEBOOK_CLASS_H

#include "contact.class.hpp"

class Phonebook{
public:
	Phonebook();
	~Phonebook();
	void 	AddContact();
	void 	Search();


private:
	int 	num;
	std::string		getNameWithSpaces(const std::string& str);
	void 	printContact(int index);
	void addParam(const std::string& str, void (*func)(const std::string&));
	Contact	cont[8];

};

#endif //CPP_PHONEBOOK_CLASS_H
