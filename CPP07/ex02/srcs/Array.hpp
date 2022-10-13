#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class Array
{
	private:
		T*				_arr;
		unsigned int	_size;

	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& other);
		~Array<T>(void);

		Array<T>& operator=(const Array<T>& other);
		T&	operator[](unsigned int const pos) const;

		unsigned int size(void) const;

		T	getArrI(unsigned int i) const;
};

template<typename T>
static std::ostream& operator<<(std::ostream& cout, const Array<T>& input);

#include "Array.tpp"

#endif

