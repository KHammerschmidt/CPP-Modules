#ifndef HELPER_HPP
# define HELPER_HPP

#include <string>

namespace Helper
{
	std::string Truncate(std::string);
	bool		Iterate(std::string string, int (&function)(int));
	bool		ValidString(std::string string, int (&function)(int));
}

#endif