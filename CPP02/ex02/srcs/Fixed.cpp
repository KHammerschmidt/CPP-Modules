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

bool	Fixed::operator>(Fixed const& fixed)
{
	if (this->getRawBits() > fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(Fixed const& fixed)
{
	if (this->getRawBits() < fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(Fixed const& fixed)
{
	if (this->getRawBits() >= fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(Fixed const& fixed)
{
	if (this->getRawBits() <= fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==(Fixed const& fixed)
{
	if (this->getRawBits() == fixed.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(Fixed const& fixed)
{
	if (this->getRawBits() != fixed.getRawBits())
		return true;
	else
		return false;
}

Fixed	Fixed::operator+(Fixed const& fixed) const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + fixed.getRawBits());

	return tmp;
}

Fixed	Fixed::operator-(Fixed const& fixed) const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - fixed.getRawBits());

	return (tmp);
}

Fixed	Fixed::operator*(Fixed const& fixed) const
{
	Fixed tmp;

	tmp.setRawBits((this->getRawBits() * fixed.getRawBits()) / (1 << this->_fracBits));

	return (tmp);
}

Fixed	Fixed::operator/(Fixed const& fixed) const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() / fixed.getRawBits());

	return (tmp);
}

/* Pre-increment, returns *this */
Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);

	return *this;
}

/* Post-increment, returns unchanged dummy */
Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() + 1);

	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);

	return *this;
}

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

Fixed const &Fixed::min(Fixed const& fNum1, Fixed const& fNum2)
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

Fixed const &Fixed::max(Fixed const& fNum1, Fixed const& fNum2)
{
	if (static_cast<Fixed>(fNum1) > static_cast<Fixed>(fNum2))
		return fNum1;
	return fNum2;
}
