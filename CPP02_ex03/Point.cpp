#include "Point.hpp"

Point::Point(void)
{
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const float fNumX, const float fNumY)
{
	this->_x = fNumX;
	this->_y = fNumY;
}

Point::~Point()
{
}

Point::Point(const Point& point)
{
	*this = point;
}

Point& Point::operator=(const Point& point)
{
	this->_x = point._x;
	this->_y = point._y;

	return *this;
}

// Fixed Point::getX(void)
// {
// 	return (this->_x);
// }

// Fixed Point::getY(void)
// {
// 	return (this->_y);
// }

// void Point::setX(Fixed m_x)
// {
// 	this->_x = m_x.getX();
// }

// void Point::setY(Fixed m_y)
// {
// 	this->_y = m_y.getY();
// }