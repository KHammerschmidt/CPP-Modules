#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {}
Point::~Point() {}

Point::Point(float x, float y) : _x(x), _y(y) {}
Point::Point(Point const& point) : _x(point.getX().getRawBits()), _y(point.getY().getRawBits()) {}

Point& Point::operator=(Point const& point)
{
	(void)point;
	return *this;
}

Fixed const& Point::getX(void) const { return (this->_x); }
Fixed const& Point::getY(void) const { return (this->_y); }
