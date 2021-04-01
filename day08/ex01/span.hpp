//
// Created by Rinat Nurutdinow on 4/1/21.
//

#ifndef DAY08_SPAN_HPP
#define DAY08_SPAN_HPP

#include <iostream>
#include <set>

class span {
private:

	unsigned int 	nN_;
	std::set<int>  iSet_;

public:

	span(unsigned int N);

	span(const span &);

	span &operator=(const span &);

	virtual ~span();


	void 	addNumber(int);
	void 	printAll() const;
	int 	shortestSpan() const;
	int 	longestSpan() const;
};


#endif //DAY08_SPAN_HPP
