//
// Created by Rinat Nurutdinow on 3/4/21.
//

#include "Human.hpp"

Human::Human() {

}

Human::~Human() {

}

std::string Human::identify(){
	return _head.identify();
}

const Brain& Human::getBrain() {
	return _head;
}

