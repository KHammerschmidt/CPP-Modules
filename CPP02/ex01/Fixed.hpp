#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>			//roundf

class Fixed
{
	private:
		int 				_fixedPointNum;
		static const int 	_fracBits = 8;		//(value integer literal 8)

	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed &copyFixed);
		Fixed& operator=(const Fixed& fixed);

		int	getRawBits(void) const;			//returns the raw value of the fixed-point number
		void setRawBits(int const raw);		//sets the raw value of the fixed-point number

		Fixed(const int parameter);
		Fixed(const float fNum);
		float	toFloat(void) const;
		int		toInt(void) const;

};

	std::ostream& operator<<(std::ostream& cout, const Fixed& fixed);

#endif