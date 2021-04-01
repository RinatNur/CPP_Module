//
// Created by Rinat Nurutdinow on 4/1/21.
//

#ifndef DAY08_EASYFIND_HPP
#define DAY08_EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <array>
#include <array>

template <typename T>
typename T::iterator 	easyfind(T cont, int required)
{
	typename T::iterator i;
	i = std::find(cont.begin(), cont.end(), required);
	if (i == cont.end())
		throw std::out_of_range("Number is not found");
	return i;
}


#endif //DAY08_EASYFIND_HPP
