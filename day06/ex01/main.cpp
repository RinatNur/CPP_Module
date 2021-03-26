//
// Created by Rinat Nurutdinow on 3/26/21.
//

#include <iostream>
#include <typeinfo>
#include <string>

void printHeader(std::string header)
{
	std::cout	<< "\033[1;35m"
				 << "<<<<< "
				 << header
				 << " >>>>>"
				 << "\033[0m"
				 << std::endl;
}

struct Data{
	std::string 	str1;
	int 			num;
	std::string 	str2;
};

void * serialize(void)
{
	char *output = new char[2 * sizeof (string) + sizeof (int)];
	std::string   alphabet = "abcdefghijklmnopqrstuvwxyz";
	srand(time(NULL));
	int i = 0;

	for (; i < 10; ++i)
		output[i] = alphabet[rand() % alphabet.size()];

	*reinterpret_cast<int*>(output + i) = alphabet[rand() % alphabet.size()];
	i += 4;

	for (; i < 19; ++i)
		output[i] = alphabet[rand() % alphabet.size()];

	return output;
}

Data * deserialize(void * raw)
{
	Data* tmp = new Data;
	tmp->str1 = std::string(static_cast<char *>(raw), 10);
	tmp->num = *reinterpret_cast<int*>(static_cast<char *>(raw) + 10);
	tmp->str2 = std::string(static_cast<char *>(raw) + 14, 5);
	return tmp;
}

int 	main()
{

	void* raw = serialize();
	Data*  pData = deserialize(raw);

	printHeader("DAY 06 EX 01");
	std::cout << "String 1: " << pData->str1 << std::endl;
	std::cout << "Integer : " << pData->num << std::endl;
	std::cout << "String 2: " << pData->str2 << std::endl;
	return 0;
}
