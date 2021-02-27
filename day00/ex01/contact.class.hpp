#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>

class Contact {
	std::string 				_first_name;
	std::string 				_last_name;
	std::string 				_nickname;
	std::string 				_login;
	std::string 				_postal_address;
	std::string 				_email_address;
	std::string 				_phone_number;
	std::string 				_birthday_date;
	std::string 				_favorite_meal;
	std::string 				_underwear_color;
	std::string 				_darkest_secret;
public:
//	void 	printContact(int index);
	void 	setFirstName(const std::string& name);
	void 	setLastName(const std::string& name);
	void 	setNickName(const std::string& name);
	void 	setLogin(const std::string& log);
	void 	setPostalAddress(const std::string& address);
	void 	setEmailAddress(const std::string& address);
	void 	setPhoneNumber(const std::string& num);
	void 	setBirthdayDate(const std::string& date);
	void 	setFavoriteMeal(const std::string& meal);
	void 	setUnderwearColor(const std::string& color);
	void 	setDarkestSecret(const std::string& secret);

	std::string 	getFirstName(void);
	std::string		getLastName(void);
	std::string		getNickName(void);
	std::string		getLogin(void);
	std::string		getPostalAddress(void);
	std::string		getEmailAddress(void);
	std::string		getPhoneNumber(void);
	std::string		getBirthdayDate(void);
	std::string		getFavoriteMeal(void);
	std::string		getUnderwearColor(void);
	std::string		getDarkestSecret(void);
};

#endif //CONTACT_CLASS_HPP
