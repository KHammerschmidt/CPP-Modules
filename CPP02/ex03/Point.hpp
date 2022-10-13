#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point(void);
		Point(Point const& point);
		Point(float x, float y);
		~Point();

		Point& operator=(const Point& point);

		Fixed const& getX() const;
		Fixed const& getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif