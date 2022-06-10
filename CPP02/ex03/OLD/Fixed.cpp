#include "Fixed.hpp"

Fixed::Fixed(float m_x, float m_y)
{
	setX(m_x);
	setY(m_y);
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(void)
{
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	this->setX(fixed._x);
	this->setY(fixed._y);
	// this->_y = fixed._y;

	return *this;
}

float Fixed::getX()
{
	return (this->_x);
}

void	Fixed::setX(float m_x)
{
	this->_x = m_x;
}

float Fixed::getY()
{
	return (this->_y);
}

void	Fixed::setY(float m_y)
{
	this->_y = m_y;
}