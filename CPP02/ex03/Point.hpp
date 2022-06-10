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
		Point(const float x, const float y);
		~Point();

		Point (Point const& point);
		Point& operator=(Point const& point);

		Fixed& getX();
		Fixed& getY();
		// void	setX(Fixed m_x);
		// void	setY(Fixed m_y);

		friend bool bsp(Point const a, Point const b, Point const c, Point const point);
};

#endif