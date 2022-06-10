#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		float _x;
		float _y;

	public:
		Fixed(void);
		Fixed(float m_x, float m_y);
		Fixed& operator=(const Fixed& fixed);
		~Fixed();

		float	getX();
		void	setX(float m_x);
		float	getY();
		void	setY(float m_y);
};


#endif