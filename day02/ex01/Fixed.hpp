//
// Created by Rinat Nurutdinow on 3/8/21.
//

#ifndef _FIXED_H
#define _FIXED_H

#include <iostream>
#include <sstream>
#include <cmath>

class Fixed {
public:

	Fixed();
	Fixed(const int& int_fixedPointValue);
	Fixed(const float& fValue);
	Fixed(const Fixed& copy_obj);
	~Fixed();

	Fixed& 	operator=(Fixed const & obj_to_assign);
	int toInt() const;
	float toFloat() const;
	void setRawBits( int nRaw );
	int getRawBits() const;

private:

	int 	_nfixedPointValue;
	const int _nNumOfBits;

};

std::ostream& operator<<(std::ostream& o, const Fixed &obj);

#endif //_FIXED_H


