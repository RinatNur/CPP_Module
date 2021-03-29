//
// Created by Rinat Nurutdinow on 3/25/21.
//

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Argument's are not valid." << std::endl;
		return 0;
	}
	Convert		conv(argv[1]);
	if (conv.getType() != "invalid")
		conv.printAll();
	//test operator=
//	Convert		test("123");
//	test = conv;
//	if (test.getType() != "invalid")
//		test.printAll();

	return 0;
}