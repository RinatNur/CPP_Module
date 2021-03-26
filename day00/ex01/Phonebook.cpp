#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() {
	this->_numberOfContact = -1;
	_initKeysOfFieldsList();
}

void Phonebook::_initKeysOfFieldsList() {
	_keysOfFieldsList[0] = "first name";
	_keysOfFieldsList[1] = "last name";
	_keysOfFieldsList[2] = "nickname";
	_keysOfFieldsList[3] = "login";
	_keysOfFieldsList[4] = "postal address";
	_keysOfFieldsList[5] = "email_address";
	_keysOfFieldsList[6] = "phone number";
	_keysOfFieldsList[7] = "birthday date";
	_keysOfFieldsList[8] = "favorite meal";
	_keysOfFieldsList[9] = "underwear color";
	_keysOfFieldsList[10] = "darkest secret";
}

void Phonebook::_readValuesOfContactFromInput() {
	for (int i = 0; i < 11; ++i)
	{
		std::cout << "Enter " << _keysOfFieldsList[i] << ": ";
		getline(std::cin, _valuesOfFieldsList[i]);
	}
}

void Phonebook::AddContact() {
	std::string		tmp;
	if (this->_numberOfContact < 7)
		this->_numberOfContact++;
	else
	{
		std::cout << "Sorry, the phonebook is full. You can't add a new contact."
			<< std::endl;
		return;
	}
	_readValuesOfContactFromInput();
	_contactList[_numberOfContact].setContactValues(_valuesOfFieldsList);
	std::cout << "Contact successfully added!" << std::endl << std::endl;
}

std::string Phonebook::_formatNameToOutput(const std::string &str) {
	std::string		str_to_print;
	int				len = str.size();

	if (len > 10)
	{
		for (int i = 0; i < 9; ++i)
			str_to_print.push_back(str[i]);
		str_to_print.push_back('.');
	}
	else
	{
		for(int i = 0; i < 10 - len; ++i)
			str_to_print.push_back(' ');
		for(int i = 0; i < len; ++i)
			str_to_print.push_back(str[i]);
	}
	return str_to_print;
}

void Phonebook::_printContactFromSearch() {
	std::cout << "Please, enter index of contact: ";
	std::string 	index;
	getline(std::cin, index);
	if (index.size() == 1
		&& (0 <= (index[0] + '0')
			&& (index[0] - '0') <= _numberOfContact))
		Contact::printContact(_contactList[index[0] - '0']);
	else
		std::cout << "Index isn't correct!" << std::endl;
	std::cout << std::endl;
}


void Phonebook::Search() {
	if (this->_numberOfContact < 0) {
		std::cout << "Sorry, the phonebook is empty" << std::endl << std::endl;
		return;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i <= this->_numberOfContact; i++)
	{
		std::cout << "         " << i << "|";
		std::cout << this->_formatNameToOutput(_contactList[i].getFirstName()) << "|";
		std::cout << this->_formatNameToOutput(_contactList[i].getLastName()) << "|";
		std::cout << this->_formatNameToOutput(_contactList[i].getNickName()) << std::endl;
	}
	_printContactFromSearch();
}
