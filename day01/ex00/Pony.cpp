//
// Created by Rinat Nurutdinow on 3/1/21.
//

#include <iostream>
#include <string>
#include <unistd.h>
#include "Pony.hpp"

Pony::Pony(const std::string& s1, const std::string& s2, const std::string& s3) {
	this->name = s1;
	age = s2;
	color = s3;
	std::cout << "Pony was born (object constructed)!" << std::endl;
}

Pony::~Pony() {
	std::cout << "The pony is gone (is deleted from memory)!" << std::endl;
}

void Pony::ponyOnTheHeap() {
	Pony*	burak = new Pony("Burak", "2", "black");
	burak->presentation();
	usleep(500000);
	burak->run();
	delete burak;
}

void Pony::ponyOnTheStack() {
	Pony	burak("Laguna", "3", "mare");
	burak.presentation();
	usleep(500000);
	burak.run();
}

void Pony::run() {
	std::string 	space;
	for(int i = 0; i < 5; ++i)
	{
		std::cout << space << name[0] << std::endl;
		usleep(500000);
		space += "   ";
	}
}

void Pony::presentation() {
	std::cout << "After " << age << " years..."
		<< std::endl << "Hi, this is " << name << "! It is " << age << " years old!"
		<< std::endl << "It color is " << color << ". Look how fast it running!"
		<< std::endl;
}
