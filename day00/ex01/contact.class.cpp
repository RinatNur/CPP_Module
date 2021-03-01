#include <iostream>
#include <string>
#include "contact.class.hpp"

std::string Contact::getFirstName(void) { return _first_name; }
std::string Contact::getLastName(void) { return _last_name; }
std::string Contact::getNickName(void) { return _nickname; }
std::string Contact::getLogin(void) { return _login; }
std::string Contact::getPostalAddress(void) { return _postal_address; }
std::string Contact::getEmailAddress(void) { return _email_address; }
std::string Contact::getPhoneNumber(void) { return _phone_number; }
std::string Contact::getBirthdayDate(void) { return _birthday_date; }
std::string Contact::getFavoriteMeal(void) { return _favorite_meal; }
std::string Contact::getUnderwearColor(void) { return _underwear_color; }
std::string Contact::getDarkestSecret(void) { return _darkest_secret; }

void Contact::printContact(Contact& contact) {
	std::cout << "     First name: " << contact.getFirstName() << std::endl
		<< "      Last name: " << contact.getLastName() << std::endl
		<< "       Nickname: " << contact.getNickName() << std::endl
		<< "          Login: " << contact.getLogin() << std::endl
		<< " Postal address: " << contact.getPostalAddress() << std::endl
		<< "  Email address: " << contact.getEmailAddress() << std::endl
		<< "   Phone number: " << contact.getPhoneNumber() << std::endl
		<< "  Birthday date: " << contact.getBirthdayDate() << std::endl
		<< "  Favorite meal: " << contact.getFavoriteMeal() << std::endl
		<< "Underwear color: " << contact.getUnderwearColor() << std::endl
		<< " Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

void Contact::setContactValues(const std::string* arrOfValues) {
	_first_name = arrOfValues[0];
	_last_name = arrOfValues[1];
	_nickname = arrOfValues[2];
	_login = arrOfValues[3];
	_postal_address = arrOfValues[4];
	_email_address = arrOfValues[5];
	_phone_number = arrOfValues[6];
	_birthday_date = arrOfValues[7];
	_favorite_meal = arrOfValues[8];
	_underwear_color = arrOfValues[9];
	_darkest_secret = arrOfValues[10];
}
