//
// Created by Rinat Nurutdinow on 3/8/21.
//

#include <iostream>
#include <fstream>
#include <string>

int		main(int argc, char **argv)
{
	if (argc != 4 || !strlen(argv[1]))
	{
		std::cout << "Bad arguments." << std::endl;
		return (0);
	}

	std::ifstream		input_file;
	input_file.open(argv[1]);

	if (!input_file.is_open()) {
		std::cout << "Error. File is not open." << std::endl;
		return (-1);
	} else
		std::cout << "File is opened." << std::endl;

	std::string 	str;
	std::string 	output_filename = argv[1];
	output_filename += ".replace";
	std::ofstream	output_file(output_filename);

	while (getline(input_file, str))
	{
		size_t 	found;
		do {
			found = str.find((argv[2]));
			if (found != std::string::npos)
				str.replace(str.find(argv[2]), strlen(argv[2]), argv[3]);
		} while (found != std::string::npos);
		output_file << str << std::endl;
	}
	std::cout << std::endl;
	input_file.close();
	output_file.close();
	return (0);
}

