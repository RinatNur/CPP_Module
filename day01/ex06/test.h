//
// Created by Rinat Nurutdinow on 3/7/21.
//

#ifndef DAY01_TEST_H
#define DAY01_TEST_H


class test {
public:
	int x;
	const int y;
	test();
	test(const test &copy);
	test &operator+(test value);
	test &operator+(int value);
	test &operator=(test value);
};


#endif //DAY01_TEST_H
