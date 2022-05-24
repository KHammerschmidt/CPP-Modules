#include <iostream>
#include <fstream>
#include <string>

#include "File.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <filename> <string to replace> <string to replace by.>" << std::endl;
		return 1;
	}
	std::ifstream orgFile;
	if (File::openFile(argv[1], orgFile))
		return 1;

	std::ofstream repFile;
	if (File::openRepFile(argv[1], repFile))
		return 1;

	File::writeToFile(orgFile, repFile, argv[2], argv[3]);

	std::cout << "End of file reached." << std::endl;

}
