#include "Input.hpp"

std::string Input::ScanString(void)
{
	std::string string;


	getline(std::cin, string);
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
	return (string);
}

t_cmd	Input::ScanCommand(void)
{
	std::string	string;

	while (string.empty())
	{
		Output::PromptCommand();
		string = ScanString();
	}
	if (!string.compare("ADD"))
		return (ADD);
	else if (!string.compare("SEARCH"))
		return (SEARCH);
	else if (!string.compare("EXIT"))
		return (EXIT);
	else
		return (ERROR);
}
