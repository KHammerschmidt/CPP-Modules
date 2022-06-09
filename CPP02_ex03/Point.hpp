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
		Point(const float fNumX, const float fNumY);
		~Point();

		Point (const Point& point);
		Point& operator=(const Point& point);

		Fixed getX();
		Fixed getY();
		// void	setX(Fixed m_x);
		// void	setY(Fixed m_y);
		friend bool bsp(Point const a, Point const b, Point const c, Point const point);
};

#endif