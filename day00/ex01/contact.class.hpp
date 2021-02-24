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
	void 	SetFirstName(const std::string& name);
	void 	SetLastName(const std::string& name);
	void 	SetNickName(const std::string& name);
	void 	SetLogin(const std::string& log);
	void 	SetPostalAdress(const std::string& adress);
	void 	SetEmailAdress(const std::string& adress);
	void 	SetPhoneNumber(const std::string& num);
	void 	SetBirthdayDate(const std::string& date);
	void 	SetFavoriteMeal(const std::string& meal);
	void 	SetUnderwearColor(const std::string& color);
	void 	SetDarkestSecret(const std::string& secret);

	std::string 	GetFirstName(void);
	std::string		GetLastName(void);
	std::string		GetNickName(void);
	std::string		GetLogin(void);
	std::string		GetPostalAdress(void);
	std::string		GetEmailAdress(void);
	std::string		GetPhoneNumber(void);
	std::string		GetBirthdayDate(void);
	std::string		GetFavoriteMeal(void);
	std::string		GetUnderwearColor(void);
	std::string		GetDarkestSecret(void);
	std::string		GetValue(std::string name, std::string value);
};

#endif //CONTACT_CLASS_HPP