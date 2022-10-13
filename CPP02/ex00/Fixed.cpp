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
	this->_fixedPointNum = fixed.getRawBits();
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
