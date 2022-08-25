#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <stdexcept>

struct NotFound : public std::exception
{
	const char* what() const throw();
};

template<typename T> T easyfind(std::vector<T>& var, int val);
#include "easyfind.tpp"

#endif