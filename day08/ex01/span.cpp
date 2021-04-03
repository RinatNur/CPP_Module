//
// Created by Rinat Nurutdinow on 4/1/21.
//

#include "span.hpp"

span::span(unsigned int N) : nN_(N), iSet_(){
}


span::span(const span & copy_obj) {
	operator=(copy_obj);
}

span &span::operator=(const span & objToAssign) {
	this->nN_ = objToAssign.nN_;
	this->iSet_ = objToAssign.iSet_;
	return *this;
}

span::~span() {

}

void span::addNumber(const int num) {
	if (this->iSet_.size() == nN_)
		throw std::out_of_range("Container is full");
	this->iSet_.insert(num);
}

void span::addRange(int* start, int* end) {
	if ((end - start) + iSet_.size() > this->nN_)
		throw std::out_of_range("Error. The range is too big");
	this->iSet_.insert(start, end);
}

void span::printAll() const{
	for (auto& i : this->iSet_)
		std::cout << i << " ";
	std::cout << std::endl;
}

int span::shortestSpan() const {
	if (iSet_.empty() || iSet_.size() == 1)
		throw std::out_of_range("Not enough elements to count span");

	int 	span;
	std::set<int>::iterator it;
	std::set<int>::iterator it2;
	it = it2 = this->iSet_.begin();
	it2++;
	span = abs(*it2 - *it);
	for (it; it2 != iSet_.end(); it++, it2++)
	{
		if (abs(*it - *it2) < span)
			span = abs(*it - *it2);
	}
	return span;
}

int span::longestSpan() const {
	if (iSet_.empty() || iSet_.size() == 1)
		throw std::out_of_range("Not enough elements to count span");
	std::set<int>::iterator it;
	it = this->iSet_.end();
	it--;
	return *it - *this->iSet_.begin();
}
