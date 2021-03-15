//
// Created by Rinat Nurutdinow on 3/8/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : _nnumOfFractionalBeats(8) {
	std::cout << "Default constructor called" << std::endl;
	this->_nfixedPointValue = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy_class)
	: _nnumOfFractionalBeats(copy_class._nnumOfFractionalBeats){
	std::cout << "Copy constructor called" << std::endl;
	this->_nfixedPointValue = copy_class.getRawBits();
}

Fixed& Fixed::operator=(Fixed const & obj_to_assign) {
	std::cout << "Assignation operator called" << std::endl;
	this->_nfixedPointValue = obj_to_assign.getRawBits();
	return *this;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return _nfixedPointValue;
}

void Fixed::setRawBits(const int raw) {
	_nfixedPointValue = raw;
}

