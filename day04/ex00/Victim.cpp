//
// Created by Rinat Nurutdinow on 3/17/21.
//

#include "Victim.hpp"

Victim::Victim(const std::string& szName) : szName_(szName){
	std::cout << "Some random victim called " << this->szName_ << " just appeared!\n";
}

Victim::Victim(const Victim &copy_obj) {
	operator=(copy_obj);
}

Victim::~Victim() {
	std::cout << "Victim " << this->szName_ << " just died for no apparent reason!\n";

}

Victim &Victim::operator=(const Victim &objToAssign) {
	if(this != &objToAssign)
		this->szName_ = objToAssign.szName_;
	return *this;
}

void Victim::salutation() const{
	std::cout << "I'm " << this->szName_  << ", and I like otters!\n";
}

std::string Victim::getName() const {
	return this->szName_;
}

void Victim::setName(const std::string &szName) {
	this->szName_ = szName;
}

void Victim::getPolymorphed() const{
	std::cout << this->szName_ << " has been turned into a cute little sheep!\n";
}

std::ostream&		operator<<(std::ostream& o, const Victim& obj)
{
	o << "I'm " << obj.getName()  << ", and I like otters!\n";
	return o;
}


