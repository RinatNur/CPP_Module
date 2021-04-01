//
// Created by Rinat Nurutdinow on 3/30/21.
//

#include "Array.hpp"

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				 << "<<<<< "
				 << header
				 << " >>>>>"
				 << "\033[0m"
				 << std::endl;
}

int 	main()
{
	printHeader("Test with array of float");
	{
		try {
			Array<float> fArr(5);
			for (int i = 0; i < 5; ++i)
				fArr[i] = i + 0.25;
			Array<float> fTmp(5);
			for (int i = 0; i < 5; ++i)
				fTmp[i] = i + 0.25;
			fArr = fTmp;
			for (int i = 0; i < 5; ++i)
				std::cout << fTmp[i] << std::endl;

		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	printHeader("Test with array of int");
	{
		try {
			Array<int> iArr(5);
			Array<int> iTmp(5);
			for (int i = 0; i < 5; ++i)
				iArr[i] = i + 3;
			iTmp = iArr;
			for (int i = 0; i < 5; ++i)
				std::cout << iTmp[i] << std::endl;
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	printHeader("Test with array of string");
	{
		try {
			Array<std::string> sArr(5);
			Array<std::string> sTmp;
			sArr[0] = "Day";
			sArr[1] = "07";
			sArr[2] = "ex";
			sArr[3] = "02";
			sArr[4] = ":-)";
			sTmp = sArr;
			for (int i = 0; i < 5; ++i)
				std::cout << sTmp[i] << " ";
			std::cout << std::endl;
			std::cout << "len of array = " << sTmp.size() << std::endl;
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}

	}
	printHeader("Test with error index");
	{
		try {
			Array<std::string> sArr(5);
			sArr[6] = "Day";
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
}