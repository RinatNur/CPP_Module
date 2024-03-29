#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string str;

	if (argc == 1)
	{
//		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; i++)
		str = str.append(argv[i]);
	for (std::string::size_type i = 0; i < str.size(); i++)
		std::cout << static_cast<char>(toupper(static_cast<char>(str[i])));
	std::cout << std::endl;
	return 0;
}
