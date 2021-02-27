#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <map>
class Contact {
	std::map<std::string, std::string> contact_fields;
	void _initFieldsInContact(std::string *fieldsInContact);
public:
	Contact();
	std::string		_fields_in_contact[11];
	std::string		getFieldValue(const std::string& key);
	void			printContact(int index, Contact& contact);
	void			setFieldInContact(const std::string& key, const std::string& value);
};

#endif //CONTACT_CLASS_HPP
