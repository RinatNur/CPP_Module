#include <string>
#include "contact.class.hpp"

void Contact::setFirstName(const std::string& name) { _first_name = name; }
void Contact::setLastName(const std::string& name) { _last_name = name; }
void Contact::setNickName(const std::string& name) { _nickname = name; }
void Contact::setLogin(const std::string& log) { _login = log; }
void Contact::setPostalAddress(const std::string &address) { _postal_address = address; }
void Contact::setEmailAddress(const std::string &address) { _email_address = address; }
void Contact::setPhoneNumber(const std::string &num) { _phone_number = num; }
void Contact::setBirthdayDate(const std::string &date) { _birthday_date = date; }
void Contact::setFavoriteMeal(const std::string &meal) { _favorite_meal = meal; }
void Contact::setUnderwearColor(const std::string &color) { _underwear_color = color; }
void Contact::setDarkestSecret(const std::string &secret) { _darkest_secret = secret; }

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

//void Phonebook::printContact(int index) {
//	using std::cout;
//	using std::endl;
//
//	cout << "     First name: " << _contactList[index].getFirstName() << endl;
//	cout << "      Last name: " << _contactList[index].getLastName() << endl;
//	cout << "       Nickname: " << _contactList[index].getNickName() << endl;
//	cout << "          Login: " << _contactList[index].getLogin() << endl;
//	cout << " Postal address: " << _contactList[index].getPostalAddress() << endl;
//	cout << "  Email address: " << _contactList[index].getEmailAddress() << endl;
//	cout << "   Phone number: " << _contactList[index].getPhoneNumber() << endl;
//	cout << "  Birthday date: " << _contactList[index].getBirthdayDate() << endl;
//	cout << "  Favorite meal: " << _contactList[index].getFavoriteMeal() << endl;
//	cout << "Underwear color: " << _contactList[index].getUnderwearColor() << endl;
//	cout << " Darkest secret: " << _contactList[index].getDarkestSecret() << endl;
//}
