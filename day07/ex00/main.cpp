//
// Created by Rinat Nurutdinow on 3/30/21.
//

#include "whatever.hpp"

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				 << "<<<<< "
				 << header
				 << " >>>>>"
				 << "\033[0m"
				 << std::endl;
}

class Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int getN() const { return this->_n; }
private:
	int _n;
};

int 	main()
{
	{
		double first = -123;
		double second = -1;
		printHeader("Min and Max of two numbers");
		std::cout << "First: " << first << std::endl;
		std::cout << "Second: " << second << std::endl;
		std::cout << "Min of " << first << " and " << second << " is "
				  << min(first, second) << std::endl;
		std::cout << "Max of " << first << " and " << second << " is "
				  << max(first, second) << std::endl;
	}

	{
		printHeader("Swap to values of one type");
		std::string string1 = "school 21";
		std::string string2 = "sber school";
		std::cout << "String1: " << string1 << std::endl;
		std::cout << "String2: " << string2 << std::endl;
		printHeader("after swap");
		swap(string1, string2);
		std::cout << "String1: " << string1 << std::endl;
		std::cout << "String2: " << string2 << std::endl;
	}

	{
		printHeader("tests from subject");
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}

	{
		printHeader("Test with class Awesome");
		Awesome a(-3);
		Awesome b(-10);

		std::cout << "A: " << a.getN() << std::endl;
		std::cout << "B: " << b.getN() << std::endl;
		printHeader("Swap");
		::swap(a, b);
		std::cout << "A: " << a.getN() << std::endl;
		std::cout << "B: " << b.getN() << std::endl;
		std::cout << "Min is: " << min(a, b).getN() << std::endl;
		std::cout << "Max is: " << max(a, b).getN() << std::endl;
	}

	return 0;
}
