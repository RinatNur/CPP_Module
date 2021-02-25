#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>

class Contact {
	std::string 				first_name;
	std::string 				last_name;
	std::string 				nickname;
	std::string 				login;
	std::string 				postal_address;
	std::string 				email_address;
	std::string 				phone_number;
	std::string 				birthday_date;
	std::string 				favorite_meal;
	std::string 				underwear_color;
	std::string 				darkest_secret;
public:
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
	std::string		getValue(std::string name, std::string value);
};

#endif //CONTACT_CLASS_HPP
