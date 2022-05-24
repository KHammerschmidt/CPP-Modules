#include "File.hpp"

int File::openFile(std::string filename, std::ifstream& orgFile)
{
	orgFile.open(filename);
	if (!(orgFile.is_open()))
	{
		std::cout << "Error: unable to open orgFile" << std::endl;
		return 1;
	}
	return 0;
}

int	File::openRepFile(std::string filename, std::ofstream& repFile)
{
	filename = filename + ".Replace";
	repFile.open(filename);
	if (!(repFile.is_open()))
	{
		std::cout << "Error: unable to open repFile" << std::endl;
		return 1;
	}
	return 0;
}

void File::writeToFile(std::ifstream& orgFile, std::ofstream& repFile, std::string s1, std::string s2)
{
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
}
