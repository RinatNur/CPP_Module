//
// Created by Rinat Nurutdinow on 3/1/21.
//

#ifndef DAY01_PONY_H
#define DAY01_PONY_H

#include <string>

class Pony{
public:
	Pony(const std::string& name, const std::string& age, const std::string& suit);
	~Pony();

	void static		ponyOnTheHeap();
	void static		ponyOnTheStack();
private:
	std::string		_szName;
	std::string		_szAge;
	std::string		_szColor;
	void 			_presentation();
	void 			_run();
};


#endif //DAY01_PONY_H
