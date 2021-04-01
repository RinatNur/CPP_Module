//
// Created by Rinat Nurutdinow on 4/1/21.
//

#include "span.hpp"

int main ()
{
	try
	{
		span mySpan(3);
		mySpan.addNumber(13);
		mySpan.addNumber(7);
		mySpan.addNumber(10);
//		mySpan.printAll();
		std::cout << mySpan.shortestSpan() << std::endl;
		std::cout << mySpan.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
