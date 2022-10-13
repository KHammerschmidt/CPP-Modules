#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

namespace File
{
	int		openFile(std::string filename, std::ifstream& orgFile);
	int		openRepFile(std::string filename, std::ofstream& repFile);
	void	writeToFile(std::ifstream& orgFile, std::ofstream& repFile, std::string s1, std::string s2);
}

#endif