#ifndef CPP_PHONEBOOK_CLASS_H
#define CPP_PHONEBOOK_CLASS_H

#include "contact.class.hpp"

class Phonebook{
public:
	Phonebook();
	void 					AddContact();
	void 					Search();
private:
	Contact					_contactList[8];
	std::string static		_formatNameToOutput(const std::string& str);
	std::string 			_valuesOfFieldsList[11];
	std::string 			_keysOfFieldsList[11];
	int 					_numberOfContact;

	void					_readValuesOfContactFromInput();
	void					_initKeysOfFieldsList();
};

#endif //CPP_PHONEBOOK_CLASS_H
