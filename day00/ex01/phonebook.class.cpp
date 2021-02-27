#include <iostream>
#include "phonebook.class.hpp"
#include "contact.class.hpp"

Phonebook::Phonebook() { this->_numberOfContacts = -1; }

Phonebook::~Phonebook() {

}

void Phonebook::AddContact() {
	std::string		tmp;
	if (this->_numberOfContacts < 7)
		this->_numberOfContacts++;
	else
	{
		std::cout << "Sorry, the phonebook is full. You can't add a new contact."
			<< std::endl;
		return;
	}

	std::cout << "Enter first name: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setFirstName(tmp);

	std::cout << "Enter last name: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setLastName(tmp);

	std::cout << "Enter nickname: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setNickName(tmp);

	std::cout << "Enter login: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setLogin(tmp);

	std::cout << "Enter postal address: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setPostalAddress(tmp);

	std::cout << "Enter email address: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setEmailAddress(tmp);

	std::cout << "Enter phone number: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setPhoneNumber(tmp);

	std::cout << "Enter birthday date: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setBirthdayDate(tmp);

	std::cout << "Enter favorite meal: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setFavoriteMeal(tmp);

	std::cout << "Enter underwear color: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setUnderwearColor(tmp);

	std::cout << "Enter darkest secret: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	_contactList[_numberOfContacts].setDarkestSecret(tmp);

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

	if (this->_numberOfContacts < 0) {
		cout << "Sorry, the phonebook is empty" << endl << endl;
		return;
	}
	cout << "     index|first name| last name|  _nickname" << endl;
	for (int i = 0; i <= this->_numberOfContacts; i++)
	{
		cout << "         " << i << "|";
		cout << this->_formatNameToOutput(_contactList[i].getFirstName()) << "|";
		cout << this->_formatNameToOutput(_contactList[i].getLastName()) << "|";
		cout << this->_formatNameToOutput(_contactList[i].getNickName()) << endl;
	}
	cout << "Please, enter index of contact: ";
	std::string 	index;
	getline(std::cin, index);
	if (index.size() == 1
		&& (0 <= (index[0] + '0')
		&& (index[0] - '0') <= _numberOfContacts))
		printContact(index[0] - '0');
	else
		cout << "Index isn't correct!" << endl;
	cout << endl;
}

void Phonebook::printContact(int index) {
	using std::cout;
	using std::endl;

	cout << "     First name: " << _contactList[index].getFirstName() << endl;
	cout << "      Last name: " << _contactList[index].getLastName() << endl;
	cout << "       Nickname: " << _contactList[index].getNickName() << endl;
	cout << "          Login: " << _contactList[index].getLogin() << endl;
	cout << " Postal address: " << _contactList[index].getPostalAddress() << endl;
	cout << "  Email address: " << _contactList[index].getEmailAddress() << endl;
	cout << "   Phone number: " << _contactList[index].getPhoneNumber() << endl;
	cout << "  Birthday date: " << _contactList[index].getBirthdayDate() << endl;
	cout << "  Favorite meal: " << _contactList[index].getFavoriteMeal() << endl;
	cout << "Underwear color: " << _contactList[index].getUnderwearColor() << endl;
	cout << " Darkest secret: " << _contactList[index].getDarkestSecret() << endl;
}
