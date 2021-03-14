//
// Created by Rinat Nurutdinow on 3/8/21.
//

#ifndef _FIXED_H
#define _FIXED_H

#include <iostream>

class Fixed {
public:

	Fixed();
	Fixed(const Fixed& copy_class);
	~Fixed();

	Fixed& 	operator=(Fixed const & obj_to_assign);
	void setRawBits( int const raw );
	int getRawBits() const;

private:

	int 	_nfixedPointValue;
	const int _nnumOfFractionalBeats;

};

#endif //_FIXED_H
