#include "Helper.hpp"

std::string Helper::Truncate(std::string string)
{
	if (string.length() > 10)
		return (string.substr(0, 9) + ".");
	else
		return (string);
}

bool	Helper::Iterate(std::string string, int (&function)(int))
{
	for (size_t i = 0; i < string.length(); i++)
	{
		if (string[i] == ' ')
			continue ;
		if (!function(string[i]))
			return (false);
	}
	return (true);
}

bool	Helper::ValidString(std::string string, int (&function)(int))
{
	if (Iterate(string, function))
		return (true);
	return (false);
}
