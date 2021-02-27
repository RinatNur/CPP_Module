#ifndef CPP_PHONEBOOK_CLASS_H
#define CPP_PHONEBOOK_CLASS_H

#include "contact.class.hpp"

class Phonebook{
public:
	Phonebook();
	void 	AddContact();
	void 	Search();


private:
	Contact			_contactList[8];
	int 			_numberOfContact;
	std::string		_formatNameToOutput(const std::string& str);
	std::string 	_enterFieldToPhonebook(const std::string& str);
};

#endif //CPP_PHONEBOOK_CLASS_H
