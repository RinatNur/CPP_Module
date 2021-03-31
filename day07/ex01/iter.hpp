//
// Created by Rinat Nurutdinow on 3/30/21.
//

#ifndef DAY07_ITER_HPP
#define DAY07_ITER_HPP

#include <iostream>
#include <iomanip>
#include <string>


template <typename T>
void iter(T* array, size_t len, void (*f)(T &t1))
{
	for (size_t i = 0; i < len; ++i)
		f(array[i]);
}

template <typename T>
void print(T &elem)
{
	std::cout <<std::fixed<<std::setprecision(2);
	std::cout << elem << std::endl;
}

template <typename T>
void decrement(T &elem)
{
	elem--;
}

template <typename T>
void sqr(T &elem)
{
	elem *= elem;
}


#endif //DAY07_ITER_HPP
