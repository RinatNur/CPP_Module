//
// Created by Rinat Nurutdinow on 3/8/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : _nNumOfBits(8) {
	std::cout << "Default constructor called" << std::endl;
	this->_nfixedPointValue = 0;
}

Fixed::Fixed(const Fixed& copy_obj)
	: _nNumOfBits(copy_obj._nNumOfBits){
	std::cout << "Copy constructor called" << std::endl;
	operator=(copy_obj);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int& int_fixedPointValue) : _nNumOfBits(8) {
	std::cout << "Int constructor called" << std::endl;
	this->_nfixedPointValue = int_fixedPointValue * 256;
}

Fixed::Fixed(const float& fValue) : _nNumOfBits(8) {
	std::cout << "Float constructor called" << std::endl;
	this->_nfixedPointValue = (int)roundf(fValue * (float)(1 << _nNumOfBits));
}

Fixed& Fixed::operator=(Fixed const & obj_to_assign) {
	std::cout << "Assignation operator called" << std::endl;
	if (&obj_to_assign != this)
		this->_nfixedPointValue = obj_to_assign._nfixedPointValue;
	return *this;
}

int Fixed::toInt() const {
	return (int)(_nfixedPointValue / (1 << _nNumOfBits));
}

float Fixed::toFloat() const {
	return ((float)(_nfixedPointValue) / (float)(1 << _nNumOfBits));
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return _nfixedPointValue;
}

void Fixed::setRawBits(int nRaw) {
	_nfixedPointValue = nRaw * (1 << _nNumOfBits);
}

std::ostream& operator<<(std::ostream& o, const Fixed &obj) {
	o << obj.;
	return o;
}
