//
// Created by Rinat Nurutdinow on 3/25/21.
//

#ifndef DAY06_CONVERT_HPP
#define DAY06_CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <assert.h>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>

class Convert {
private:

	std::string		szStr_;
	int 			type_;

	int				iValue_;
	double 			dValue_;
	float 			fValue_;
	char 			cValue_;

	enum Type {
		NONE,
		INT,
		DOUBLE,
		FLOAT,
		CHAR,
	};

public:

	Convert(const std::string&);
	Convert(const Convert &);
	Convert &operator=(const Convert &);
	~Convert() {};

	void 	parser();
	void 	fromInt();
	void 	fromChar();
	void 	fromDouble();
	void 	fromFloat();
	std::string 	getType() const;

};


#endif //DAY06_CONVERT_HPP
