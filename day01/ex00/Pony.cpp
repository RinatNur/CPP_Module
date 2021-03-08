//
// Created by Rinat Nurutdinow on 3/1/21.
//

#include <iostream>
#include <string>
#include <unistd.h>
#include "Pony.hpp"

Pony::Pony(const std::string& s1, const std::string& s2, const std::string& s3) {
	this->_szName = s1;
	_szAge = s2;
	_szColor = s3;
	std::cout << "Pony was born (object constructed)!" << std::endl;
}

Pony::~Pony() {
	std::cout << "The pony is gone (is deleted from memory)!" << std::endl;
}

void Pony::ponyOnTheHeap() {
	Pony*	burak = new Pony("Burak", "2", "black");
	burak->_presentation();
	usleep(500000);
	burak->_run();
	delete burak;
}

void Pony::ponyOnTheStack() {
	Pony	burak("Laguna", "3", "mare");
	burak._presentation();
	usleep(500000);
	burak._run();
}

void Pony::_run() {
	std::string 	space;
	for(int i = 0; i < 5; ++i)
	{
		std::cout << space << _szName[0] << std::endl;
		usleep(500000);
		space += "   ";
	}
}

void Pony::_presentation() {
	std::cout << "After " << _szAge << " years..."
		<< std::endl << "Hi, this is " << _szName << "! It is " << _szAge << " years old!"
		<< std::endl << "It color is " << _szColor << ". Look how fast it running!"
		<< std::endl;
}
