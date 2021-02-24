#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "contact.class.hpp"

using std::endl;

void Contact::SetFirstName(const std::string& name) { first_name = name; }
void Contact::SetLastName(const std::string& name) { last_name = name; }
void Contact::SetNickName(const std::string& name) { nickname = name; }
void Contact::SetLogin(const std::string& log) { login = log; }
void Contact::SetPostalAdress(const std::string &adress) { postal_address = adress; }
void Contact::SetEmailAdress(const std::string &adress) { email_address = adress; }
void Contact::SetPhoneNumber(const std::string &num) { phone_number = num; }
void Contact::SetBirthdayDate(const std::string &date) { birthday_date = date; }
void Contact::SetFavoriteMeal(const std::string &meal) { favorite_meal = meal; }
void Contact::SetUnderwearColor(const std::string &color) { underwear_color = color; }
void Contact::SetDarkestSecret(const std::string &secret) { darkest_secret = secret; }

std::string Contact::GetFirstName(void) { return first_name; }
std::string Contact::GetLastName(void) { return last_name; }
std::string Contact::GetNickName(void) { return nickname; }
std::string Contact::GetLogin(void) { return login; }
std::string Contact::GetPostalAdress(void) { return postal_address; }
std::string Contact::GetEmailAdress(void) { return email_address; }
std::string Contact::GetPhoneNumber(void) { return phone_number; }
std::string Contact::GetBirthdayDate(void) { return birthday_date; }
std::string Contact::GetFavoriteMeal(void) { return favorite_meal; }
std::string Contact::GetUnderwearColor(void) { return underwear_color; }
std::string Contact::GetDarkestSecret(void) { return darkest_secret; }

//void GetValue(Contact *(&phonebook), std::string field, int i)
//{
//	std::cout << "Enter " << field << ": ";
//	getline(std::cin, phonebook[i].field);
//}
//
//void 	SetValue(std::vector<Contact>* phonebook, void (std::vector<Contact>::*fc)()), const std::string& data)
//{
//	phonebook->(*fc(data));
//
//}
