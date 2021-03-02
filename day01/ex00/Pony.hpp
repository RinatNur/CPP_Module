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
	std::string		name;
	std::string		age;
	std::string		color;
	void 			presentation();
	void 			run();
};


#endif //DAY01_PONY_H
