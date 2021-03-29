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
	int 			impossible[4];
	bool 			isNanOrInf_;
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

	enum Impossible {
		INT_Impossible,
		Float_Impossible,
	};

	bool	isNanOrInf(std::stringstream& ss);
	bool	checkOverflow();
	void 	parser();
	void 	fromInt();
	void 	fromChar();
	void 	fromDouble();
	void 	fromFloat();

public:

	Convert(const std::string& szStr);
	Convert(const Convert &);
	Convert &operator=(const Convert &);
	~Convert();

	std::string 	getType() const;
	int				getIvalue() const;
	double			getDvalue() const;
	float			getFvalue() const;
	char			getCvalue() const;
	bool			getIsNanOrInf() const;
	void 	printAll();

};


#endif //DAY06_CONVERT_HPP
