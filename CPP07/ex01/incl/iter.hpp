#ifndef ITER_HPP
# define ITER_HPP

#include <string>

template<typename T>
void iter(T *arr, size_t len, void func(T const& ref))
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

#endif