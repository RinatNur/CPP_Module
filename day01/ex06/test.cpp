//
// Created by Rinat Nurutdinow on 3/7/21.
//
#include <iostream>
#include "test.h"
test &test::operator+(test value) {
	std::cout << "hello\n";
	return *this;
}
test &test::operator+(int value) {
	x = x + value;
	return *this;
}

test::test(const test &copy) : y(6) {
	x = copy.x;
}

test::test() : y(6) {}

test &test::operator=(test value)
{
	x = value.x;
	return *this;
}