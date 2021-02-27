#include <iostream>
#include "phonebook.class.hpp"
#include "contact.class.hpp"

Phonebook::Phonebook() { this->_numberOfContact = -1; }

std::string Phonebook::_enterFieldToPhonebook(const std::string &str) {
	std::string 	tmp;

	std::cout << "Enter " << str << ": ";
	getline(std::cin, tmp);
	return tmp;
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

	for (int i = 0; i < 11; ++i)
	{
		tmp = _enterFieldToPhonebook(_contactList[_numberOfContact]._fields_in_contact[i]);
		_contactList[_numberOfContact].setFieldInContact(_contactList[_numberOfContact]._fields_in_contact[i], tmp);
	}

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

void Phonebook::Search() {
	using std::cout;
	using std::endl;

	if (this->_numberOfContact < 0) {
		cout << "Sorry, the phonebook is empty" << endl << endl;
		return;
	}
cout << "     index|first name| last name|  nickname" << endl;
	for (int i = 0; i <= this->_numberOfContact; i++)
	{
		cout << "         " << i << "|";
		cout << this->_formatNameToOutput(_contactList[i].getFieldValue("first name")) << "|";
		cout << this->_formatNameToOutput(_contactList[i].getFieldValue("last name")) << "|";
cout << this->_formatNameToOutput(_contactList[i].getFieldValue("nickname")) << endl;
	}
	cout << "Please, enter index_str of contact: ";
	std::string 	index_str;
	int 			index_int;
	getline(std::cin, index_str);
	index_int = index_str[0] - '0';
	if (index_str.size() == 1
		&& (0 <= (index_int)
		&& (index_int) <= _numberOfContact))
		_contactList[index_int].printContact(index_int, _contactList[index_int]);
	else
		cout << "Index isn't correct!" << endl;
	cout << endl;
}


