#include "Point.hpp"

	// : _x(0), _y(0)
Point::Point(void)
{
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const float x, const float y)
{
	this->_x = x;
	this->_y = y;
}

Point::~Point()
{
}

Point::Point(Point& const point)
{
	*this = point;
}

Point& Point::operator=(Point const& point)
{
	static_cast<Fixed>(this->_x) = static_cast<Fixed>(point._x);
	static_cast<Fixed>(this->_y) = static_cast<Fixed>(point._y);

	return *this;
}

Fixed& Point::getX(void) { return (this->_x); }
Fixed& Point::getY(void) { return (this->_y); }
