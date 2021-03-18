//
// Created by Rinat Nurutdinow on 3/17/21.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string szName, std::string szTitle) {
	this->szName_ = szName;
	this->szTitle_ = szTitle;
	std::cout << this->szName_ << ", " << this->szTitle_ << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &copy_obj) {
	operator=(copy_obj);
}

Sorcerer::~Sorcerer() {
	std::cout << this->szName_ << ", " << this->szTitle_ << ", is dead. Consequences will never be the same!";
}

Sorcerer &Sorcerer::operator=(const Sorcerer &objToAssign) {
	if(this != &objToAssign)
		this->szName_ = objToAssign.szName_;
	return *this;
}

void Sorcerer::salutation() const{
	std::cout << "I am " << this->szName_ << ", " << this->szTitle_ << ", and I like ponies!\n";
}

std::string Sorcerer::getName() const {
	return this->szName_;
}

std::string Sorcerer::getTitle() const {
	return this->szTitle_;
}

void Sorcerer::polymorph(const Victim & obj) {
	obj.getPolymorphed();
}

std::ostream&		operator<<(std::ostream& o, const Sorcerer& obj)
{
	o << "I am " << obj.getName() << ", " << obj.getTitle()
		<< ", and I like ponies!\n";
	return o;
}
