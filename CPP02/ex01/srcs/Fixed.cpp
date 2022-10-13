#include "Fixed.hpp"

Fixed::Fixed() { this->_fixedPointNum = 0; }
Fixed::~Fixed() { }

Fixed::Fixed(const Fixed &copyFixed) { *this = copyFixed; }

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->_fixedPointNum = fixed._fixedPointNum;
	return *this;
}

int		Fixed::getRawBits(void) const { return this->_fixedPointNum; }
void	Fixed::setRawBits(int const raw) { this->_fixedPointNum = raw; }

/* Converts int to fixed-point value */
Fixed::Fixed(const int num) { this->_fixedPointNum = num << this->_fracBits;}

/* Converts float to fixed-point value */
Fixed::Fixed(const float fNum) { this->_fixedPointNum = roundf(fNum * (1 << this->_fracBits)); }

/* Converts fixed_point value to floating point value */
float	Fixed::toFloat(void) const { return (static_cast<float>(this->_fixedPointNum) / static_cast<float>(1 << this->_fracBits)); }

/* Converts fixed-point value to integer */
int	Fixed::toInt(void) const { return (static_cast<int>(this->_fixedPointNum >> this->_fracBits)); }

/* Prints floating-point representation of the fixed point number */
std::ostream& operator<<(std::ostream& cout, const Fixed& fixed)
{
	cout << fixed.toFloat();
	return (cout);
}
