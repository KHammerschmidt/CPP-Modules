#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointNum = 0;
}

Fixed::~Fixed()
{

}

//copy constructor
Fixed::Fixed(const Fixed &copyFixed)
{
	*this = copyFixed;
}

//copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->_fixedPointNum = fixed._fixedPointNum;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointNum;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}

Fixed::Fixed(const int num)
{
	//converts parameter to fixed-point value
	this->_fixedPointNum = num << this->_fracBits;
}

Fixed::Fixed(const float fNum)
{
	//converts it to the corresponding fixed-point value
	this->_fixedPointNum = roundf(fNum * (1 << this->_fracBits));
	std::cout << "HERE" << this->_fixedPointNum << std::endl;

}

// convertes the fixed-point value to a floating point value
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixedPointNum / static_cast<float>(1 << this->_fracBits)));
}

//converts fixed-point value to an integer value
int	Fixed::toInt(void) const
{
	return (static_cast<int>(this->_fixedPointNum >> this->_fracBits));
}

std::ostream& operator<<(std::ostream& cout, const Fixed& fixed)
{
	cout << fixed.toFloat();
	return (cout);
}

bool	Fixed::operator>(const Fixed& fixed)
{
	if (this->getRawBits() > fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed& fixed)
{
	if (this->getRawBits() < fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed& fixed)
{
	if (this->getRawBits() >= fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(const Fixed& fixed)
{
	if (this->getRawBits() <= fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==(const Fixed& fixed)
{
	if (this->getRawBits() == fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed& fixed)
{
	if (this->getRawBits() != fixed.getRawBits())
		return true;
	else
		return false;
}

Fixed	Fixed::operator+(const Fixed& fixed)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + fixed.getRawBits());

	return tmp;
}

Fixed	Fixed::operator-(const Fixed& fixed)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - fixed.getRawBits());

	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& fixed)
{
	Fixed tmp;

	tmp.setRawBits((this->getRawBits() * fixed.getRawBits()) / (1 << this->_fracBits));

	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& fixed)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() / fixed.getRawBits());

	return (tmp);
}

// pre-increment, returns *this by reference
Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);

	return *this;
}

//post-increment operator: returns unchanged dummy
Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() + 1);

	return (tmp);
}

// pre-increment-operator: returns *this by reference
Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);

	return *this;
}

// post-decrement-operator: returns dummy by value
Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() - 1);

	return (tmp);
}

Fixed&	Fixed::min(Fixed& fNum1, Fixed& fNum2)
{
	if (fNum1 < fNum2)
		return fNum1;
	return fNum2;
}

Fixed const &Fixed::min(const Fixed& fNum1, const Fixed& fNum2)
{
	if (static_cast<Fixed>(fNum1) < static_cast<Fixed>(fNum2))
		return fNum1;
	return fNum2;
}

Fixed&	Fixed::max(Fixed& fNum1, Fixed& fNum2)
{
	if (fNum1 > fNum2)
		return fNum1;
	return fNum2;
}

Fixed const &Fixed::max(const Fixed& fNum1, const Fixed& fNum2)
{
	if (static_cast<Fixed>(fNum1) > static_cast<Fixed>(fNum2))
		return fNum1;
	return fNum2;
}
