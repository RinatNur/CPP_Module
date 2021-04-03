//
// Created by Rinat Nurutdinow on 4/3/21.
//

#include "MutantStack.hpp"

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
	printHeader("Test from subject");
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	printHeader("Other tests");
	{
		MutantStack<int> ms;
		ms.push(23);
		ms.push(15);
		ms.push(78);
		ms.push(111);
		MutantStack<int> ms2;
		ms2 = ms;
		MutantStack<int>::iterator its = ms2.begin();
		std::cout << "[begin:] " << *its << std::endl;
		MutantStack<int>::iterator ite = ms2.end();
		ite--;
		std::cout << "[end:] " << *ite << std::endl;
		for (; its != ms2.end(); its++)
			std::cout << *its << " ";
		std::cout << std::endl;
		std::cout << "[pop()]" << std::endl;
		ms2.pop();
		its = ms2.begin();
		for (; its != ms2.end(); its++)
			std::cout << *its << " ";
		std::cout << std::endl;
		std::cout << "[push(555)]" << std::endl;
		ms2.push(555);
		its = ms2.begin();
		for (; its != ms2.end(); its++)
			std::cout << *its << " ";
	}
	return 0;
}