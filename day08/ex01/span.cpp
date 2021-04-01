//
// Created by Rinat Nurutdinow on 4/1/21.
//

#include "span.hpp"

span::span(unsigned int N) : nN_(N){}

void span::addNumber(const int num) {
	if (this->iSet_.size() == nN_)
		throw std::out_of_range("Container is full");
	std::pair<std::set<int>::iterator,bool> ret;
	ret = this->iSet_.insert(num);
	if (!ret.second)
		throw std::out_of_range("The number is already added");
}

span::span(const span & copy_obj) {
	operator=()
}

span &span::operator=(const span &) {
	return ;
}

span::~span() {

}

void span::printAll() const{
	for (auto& i : this->iSet_)
		std::cout << i << " ";
	std::cout << std::endl;
}

int span::shortestSpan() const {
	std::set<int>::iterator it;
	it = this->iSet_.begin();
	it++;
	return *it - *this->iSet_.begin();
}

int span::longestSpan() const {
	std::set<int>::iterator it;
	it = this->iSet_.end();
	it--;
	return *it - *this->iSet_.begin();
}
