//
// Created by Rinat Nurutdinow on 3/4/21.
//

#include "Human.hpp"

std::string Human::identify() const{
	return _head.identify();
}

const Brain& Human::getBrain() const{
	return _head;
}
