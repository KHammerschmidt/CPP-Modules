#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <filename> <string to replace> <string to replace by.>";
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream orgFile;
	orgFile.open(filename);
	if (!(orgFile.is_open()))
	{
		std::cout << "Error: unable to open file" << std::endl;
		return 1;
	}

	std::ofstream repFile;
	filename = filename + ".Replace";
	repFile.open(filename);
	if (!(repFile.is_open()))
	{
		std::cout << "Error: unable to open file" << std::endl;
		return 1;
	}

	std::string word;
	char space = ' ';
	while (!orgFile.eof())
	{
		std::string text;

		orgFile >> text;
		if (!text.compare(s1))
			repFile << s2 << space;
		else
			repFile << text << space;
	}

	orgFile.close();
	repFile.close();
	std::cout << "End of file reached." << std::endl;

	return 0;
}
