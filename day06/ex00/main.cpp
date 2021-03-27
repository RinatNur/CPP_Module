//
// Created by Rinat Nurutdinow on 3/25/21.
//

#include "Convert.hpp"

void 			printAll(char c, int i, double d, float f)
{
	std::cout <<std::fixed<<std::setprecision(1);
	std::cout << "char: " << c << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "double: " << d << std::endl;
}

void 			typeChar(char c)
{
	int i = static_cast<int>(c);
	double d = static_cast<double>(c);
	float f = static_cast<float>(c);
	printAll(c, i, d, f);

}

int main(int argc, char **argv)
{
//	if (argc != 2)
//	{
//		std::cout << "Argument's are not valid." << std::endl;
//		return 0;
//	}
//	Convert		conv(argv[1]);
//	std::cout << conv.getType() << std::endl;
	for (char i = 0; i < 127; ++i)
		std::cout << (int)i << "  " << i << std::endl;
	return 0;
}