//
// Created by Rinat Nurutdinow on 4/1/21.
//

#include "span.hpp"

void printHeader(std::string header)
{
	std::cout  << "\033[1;35m"
			   << "<<<<< "
			   << header
			   << " >>>>>"
			   << "\033[0m"
			   << std::endl;
}

int main ()
{
	printHeader("Test from subject");
	{
		span sp = span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	printHeader("Test with 100.000 elements");
	try
	{
		int  intArray[100000];
		span mySpan(100000);
		for (int i = 0; i < 100000; i++) {
			intArray[i] = i;
		}
		mySpan.addRange(intArray, intArray + sizeof(intArray)/4);
		std::cout << "[Shortest span]: " << mySpan.shortestSpan() << std::endl;
		std::cout << "[Longest span ]: " << mySpan.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	printHeader("Test with 1 element");
	try
	{
		span mySpan(1);
		mySpan.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	printHeader("Test with 2 equal elements");
	try
	{
		span mySpan(2);
		mySpan.addNumber(513);
		mySpan.addNumber(513);
		std::cout << "[Shortest span]: " << mySpan.shortestSpan() << std::endl;
		std::cout << "[Longest span ]: " << mySpan.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
