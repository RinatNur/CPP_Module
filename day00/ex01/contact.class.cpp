#include <string>
#include "contact.class.hpp"

void Contact::setFirstName(const std::string& name) { first_name = name; }
void Contact::setLastName(const std::string& name) { last_name = name; }
void Contact::setNickName(const std::string& name) { nickname = name; }
void Contact::setLogin(const std::string& log) { login = log; }
void Contact::setPostalAddress(const std::string &address) { postal_address = address; }
void Contact::setEmailAddress(const std::string &address) { email_address = address; }
void Contact::setPhoneNumber(const std::string &num) { phone_number = num; }
void Contact::setBirthdayDate(const std::string &date) { birthday_date = date; }
void Contact::setFavoriteMeal(const std::string &meal) { favorite_meal = meal; }
void Contact::setUnderwearColor(const std::string &color) { underwear_color = color; }
void Contact::setDarkestSecret(const std::string &secret) { darkest_secret = secret; }

std::string Contact::getFirstName(void) { return first_name; }
std::string Contact::getLastName(void) { return last_name; }
std::string Contact::getNickName(void) { return nickname; }
std::string Contact::getLogin(void) { return login; }
std::string Contact::getPostalAddress(void) { return postal_address; }
std::string Contact::getEmailAddress(void) { return email_address; }
std::string Contact::getPhoneNumber(void) { return phone_number; }
std::string Contact::getBirthdayDate(void) { return birthday_date; }
std::string Contact::getFavoriteMeal(void) { return favorite_meal; }
std::string Contact::getUnderwearColor(void) { return underwear_color; }
std::string Contact::getDarkestSecret(void) { return darkest_secret; }

