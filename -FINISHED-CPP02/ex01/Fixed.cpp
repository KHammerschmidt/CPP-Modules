#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called   " << std::endl;
	this->_fixedPointNum = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed &copyFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyFixed;
}

//copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNum = fixed._fixedPointNum;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointNum;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}

//converts parameter to fixed-point value
Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNum = num << this->_fracBits;
}

//converts it to the corresponding fixed-point value
Fixed::Fixed(const float fNum)
{
	std::cout << "Float constructor called" << std::endl;

	this->_fixedPointNum = roundf(fNum * (1 << this->_fracBits));
}

// convertes the fixed-point value to a floating point value
float	Fixed::toFloat(void) const
{
	float res;

	res = static_cast<float>(this->_fixedPointNum) / static_cast<float>(1 << this->_fracBits);

	return (res);
}

//converts fixed-point value to an integer value
int	Fixed::toInt(void) const
{
	return (static_cast<int>(this->_fixedPointNum >> this->_fracBits));
}

//inserts an floating-point representation of the fixed-point
//number into output stream object passed as paramter
std::ostream& operator<<(std::ostream& cout, const Fixed& fixed)
{
	cout << fixed.toFloat();
	return (cout);
}