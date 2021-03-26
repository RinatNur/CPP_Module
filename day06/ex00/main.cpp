//
// Created by Rinat Nurutdinow on 3/25/21.
//

#include <iostream>
#include <assert.h>
#include <string>
#include <fstream>
#include <sstream>


void 			checkType(const std::string& C)
{
	std::string s;
	std::stringstream ss;
	ss << C;
	int i;
	float f;
	double d;
	ss >> f;
	if (ss.fail())
		std::cout << "Failure" << std::endl;
	else
		std::cout << f << std::endl;

//	std::string::size_type sz;
//	char  c;
//	d = std::char (C);
}

int main()
{
	std::string str = "54.3";
	checkType(str);

	return 0;
}