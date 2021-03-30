//
// Created by Rinat Nurutdinow on 3/30/21.
//

#ifndef DAY07_WHATEVER_HPP
#define DAY07_WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T& first, T& second)
{
	T	tmp;
	tmp = first;
	first = second;
	second = tmp;
}

template <typename T>
T min(T first, T second)
{
	if (first < second)
		return first;
	return second;
}

template <typename T>
T max(T first, T second)
{
	if (first > second)
		return first;
	return second;
}

#endif //DAY07_WHATEVER_HPP
