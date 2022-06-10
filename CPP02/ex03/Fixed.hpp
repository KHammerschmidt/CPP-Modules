#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int 				_fixedPointNum;
		static const int	_fracBits = 8;

	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed &copyFixed);
		Fixed& operator=(const Fixed& fixed);

		int	getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed(const int num);
		Fixed(const float fNum);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed& fixed);
		bool	operator<(const Fixed& fixed);
		bool	operator>=(const Fixed& fixed);
		bool	operator<=(const Fixed& fixed);
		bool	operator==(const Fixed& fixed);
		bool	operator!=(const Fixed& fixed);

		Fixed	operator+(const Fixed& fixed);
		Fixed	operator-(const Fixed& fixed);
		Fixed	operator*(const Fixed& fixed);
		Fixed	operator/(const Fixed& fixed);

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed&	min(Fixed& fNum1, Fixed& fNum2);
		static Fixed const	&min(const Fixed& fNum1, const Fixed& fNum2);
		static Fixed&	max(Fixed& fNum1, Fixed& fNum2);
		static Fixed const	&max(const Fixed& fNum1, const Fixed& fNum2);
};

std::ostream& operator<<(std::ostream& cout, const Fixed& fixed);

#endif