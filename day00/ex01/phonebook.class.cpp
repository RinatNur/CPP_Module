#include <iostream>
#include "phonebook.class.hpp"
#include "contact.class.hpp"

Phonebook::Phonebook() { this->num = -1; }

Phonebook::~Phonebook() {

}

void Phonebook::addParam(const std::string& str, void (*func)(const std::string&))
{
	std::string		tmp;

	std::cout << str;
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	func(tmp);
//	ph[num] = func(tmp);
}

void Phonebook::AddContact() {
	std::string		tmp;
	if (this->num <= 7)
		this->num++;
	else
	{
		std::cout << "Sorry, the cont is full. You can't add a new contact."
			<< std::endl;
		return;
	}

	std::cout << "Enter first name: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setFirstName(tmp);

	std::cout << "Enter last name: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setLastName(tmp);

	std::cout << "Enter nickname: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setNickName(tmp);
//
	std::cout << "Enter login: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setLogin(tmp);

	std::cout << "Enter postal address: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setPostalAddress(tmp);

	std::cout << "Enter email address: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setEmailAddress(tmp);

	std::cout << "Enter phone number: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setPhoneNumber(tmp);

	std::cout << "Enter birthday date: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setBirthdayDate(tmp);

	std::cout << "Enter favorite meal: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setFavoriteMeal(tmp);

	std::cout << "Enter underwear color: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setUnderwearColor(tmp);

	std::cout << "Enter darkest secret: ";
	getline(std::cin, tmp);
	if (std::cin.eof())
		return;
	cont[num].setDarkestSecret(tmp);
	std::cout << "Contact successfully added!" << std::endl << std::endl;
}

std::string Phonebook::getNameWithSpaces(const std::string &str) {
	std::string 	str_to_print;
	int 	len = str.size();

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
	if (this->num < 0) {
		cout << "Sorry, the phonebook is empty" << endl << endl;
		return;
	}
	cout << "     index|first name| last name|  nickname" << endl;
	for (int i = 0; i <= this->num; i++)
	{
		cout << "         " << i << "|";
		cout << this->getNameWithSpaces(cont[i].getFirstName()) << "|";
		cout << this->getNameWithSpaces(cont[i].getLastName()) << "|";
		cout << this->getNameWithSpaces(cont[i].getNickName()) << endl;
	}
	cout << "Please, enter index of contact: ";
	int 	index;
	std::cin >> index;
	printContact(index);


}

void Phonebook::printContact(int index) {
	using std::cout;
	using std::endl;

	cout << "     First name: " << cont[index].getFirstName() << endl;
	cout << "      Last name: " << cont[index].getLastName() << endl;
	cout << "       Nickname: " << cont[index].getNickName() << endl;
	cout << "          Login: " << cont[index].getLogin() << endl;
	cout << " Postal address: " << cont[index].getPostalAddress() << endl;
	cout << "  Email address: " << cont[index].getEmailAddress() << endl;
	cout << "   Phone number: " << cont[index].getPhoneNumber() << endl;
	cout << "  Birthday date: " << cont[index].getBirthdayDate() << endl;
	cout << "  Favorite meal: " << cont[index].getFavoriteMeal() << endl;
	cout << "Underwear color: " << cont[index].getUnderwearColor() << endl;
	cout << " Darkest secret: " << cont[index].getDarkestSecret() << endl;

}



