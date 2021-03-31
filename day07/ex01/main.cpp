//
// Created by Rinat Nurutdinow on 3/30/21.
//

#include "iter.hpp"

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				 << "<<<<< "
				 << header
				 << " >>>>>"
				 << "\033[0m"
				 << std::endl;
}

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int 	main()
{
	printHeader("Test with Amesowe class");
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awesome tab2[5];
		iter(tab, 5, print);
		iter(tab2, 5, print);
	}

	printHeader("Test with Array of Int");
	{
		int arr[] = {1, 2, 3, 4, 5, 6, 7};
		iter(arr, 7, print);
		iter(arr, 7, sqr);
		printHeader("after SQR");
		iter(arr, 7, print);
	}

	printHeader("Test with Array of Double");
	{
		double arr[] = {1.3, 2.6, 3.4, 4.9, 5.0, 6.1, 7.3};
		iter(arr, 7, print);
		iter(arr, 7, sqr);
		printHeader("after SQR");
		iter(arr, 7, print);
	}

	printHeader("Test with Array of String");
	{
		std::string str[] = {"Hello", "my", "peer", "welcome", "to", "day07"};
		std::cout <<std::fixed<<std::setprecision(3);
		iter(str, 6, print);
	}


	return 0;
}
