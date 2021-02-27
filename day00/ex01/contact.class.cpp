#include <iostream>
#include <string>
#include "contact.class.hpp"

Contact::Contact() {
	_initFieldsInContact(_fields_in_contact);
	for(int i = 0; i < 11; ++i)
		contact_fields[_fields_in_contact[i]];
}

void Contact::_initFieldsInContact(std::string *fieldsInContact) {
	_fields_in_contact[0] = "first name";
	_fields_in_contact[1] = "last name";
	_fields_in_contact[2] = "nickname";
	_fields_in_contact[3] = "login";
	_fields_in_contact[4] = "postal address";
	_fields_in_contact[5] = "email address";
	_fields_in_contact[6] = "phone number";
	_fields_in_contact[7] = "birthday date";
	_fields_in_contact[8] = "favorite mael";
	_fields_in_contact[9] = "underwear color";
	_fields_in_contact[10] = "darkest secret";
}

void Contact::printContact(int index, Contact& contact) {
	using std::cout;
	using std::endl;

	for (int i = 0; i < 11; ++i)
		cout << _fields_in_contact[i] << ": " << contact_fields[_fields_in_contact[i]] << endl;
}

void Contact::setFieldInContact(const std::string &key, const std::string &value) {
	contact_fields[key] = value;
}

std::string Contact::getFieldValue(const std::string &key) {
	return contact_fields[key];
}
