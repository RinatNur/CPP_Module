//
// Created by Rinat Nurutdinow on 4/3/21.
//

#ifndef DAY08_MUTANTSTACK_HPP
#define DAY08_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	typedef typename Container::iterator iterator;
	MutantStack() : std::stack<T, Container>() {};
	MutantStack(const MutantStack<T, Container> & copy_obj)
		: std::stack<T, Container>(copy_obj) {};
	MutantStack &operator=(const MutantStack<T, Container> obj) {
		std::stack<T, Container>::operator=(obj);
		return (*this);
	};
	virtual ~MutantStack() {};

	typename Container::iterator	begin() {
		return std::stack<T, Container>::c.begin();
	}

	typename Container::iterator	end() {
		return std::stack<T, Container>::c.end();
	}

};


#endif //DAY08_MUTANTSTACK_HPP
