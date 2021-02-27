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
	Contact	_contactList[8];
	int 	_numberOfContacts;
	std::string		_formatNameToOutput(const std::string& str);
	void 	printContact(int index);

};

#endif //CPP_PHONEBOOK_CLASS_H
