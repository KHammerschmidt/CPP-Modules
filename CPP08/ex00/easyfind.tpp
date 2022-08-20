#include "easyfind.hpp"

const char* NotFound::what() const throw()
{
	return ("Not found");
}

template<typename T>
typename T::iterator easyfind(T var, int val)
{
	typename T::iterator it = std::find(var.begin(), var.end(), val);
	for (typename T::iterator it = var.begin(); it != var.end(); it++)
	{
		if (*it == val)
			return it;
	}
	if (it == var.end())
		throw NotFound();

	return it;
}
