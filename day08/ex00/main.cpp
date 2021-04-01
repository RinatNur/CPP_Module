//
// Created by Rinat Nurutdinow on 4/1/21.
//

#include "easyfind.hpp"

void 	print(int i)
{
	std::cout << i << " ";
}

void printHeader(std::string header)
{
	std::cout  << "\033[1;35m"
			   << "<<<<< "
			   << header
			   << " >>>>>"
			   << "\033[0m"
			   << std::endl;
}

int 	main()
{
	printHeader("Vector");
	{
		std::vector<int> iVector = {1, 7, 18, 4, 5, 25, 78, 54};
		std::for_each(iVector.begin(), iVector.end(), print);
		std::cout << std::endl;
		try {
			std::vector<int>::iterator i = easyfind(iVector, 78);
			std::cout << "Number " << *i << " found" << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	printHeader("Array");
	{
		std::array<int, 8> iArray = {1, 7, 18, 4, 5, 25, 78, 54};
		std::for_each(iArray.begin(), iArray.end(), print);
		std::cout << std::endl;
		try {
			auto i = easyfind(iArray, 54);
			std::cout << "Number " << *i << " found" << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	printHeader("Finding 99 in list");
	{
		std::list<int> iList = {2, 7, 18, 4, 5, 1, 25, 78, 54};
		std::for_each(iList.begin(), iList.end(), print);
		std::cout << std::endl;
		try {
			auto i = easyfind(iList, 99);
			std::cout << "Number " << *i << " found" << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}