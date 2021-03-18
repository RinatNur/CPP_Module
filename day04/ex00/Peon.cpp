//
// Created by Rinat Nurutdinow on 3/17/21.
//

#include "Peon.hpp"

Peon::Peon(const std::string& szName) : Victim(szName){
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &copy_obj) : Victim(copy_obj.szName_){
	operator=(copy_obj);
}

Peon::~Peon() {
	std::cout << "Bleuark...\n";
}

Peon &Peon::operator=(const Peon &objToAssign) {
	if(this != &objToAssign)
		this->szName_ = objToAssign.szName_;
	return *this;
}

void Peon::getPolymorphed() const{
	std::cout << this->szName_ << " has been turned into a pink pony!\n";
}