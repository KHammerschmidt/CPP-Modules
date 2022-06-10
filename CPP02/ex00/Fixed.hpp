#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int 				_fixedPointNum;
		static const int 	_fracBits = 8;

	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed &copyFixed);
		Fixed& operator=(const Fixed& fixed);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif