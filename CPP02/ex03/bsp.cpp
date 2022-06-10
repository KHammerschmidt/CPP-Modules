#include "Point.hpp"

/* Calculates line equation and checks whether points c1 & c2 lie on 
   opposite sides of the line. When being performed with a,b,c and true
   indicates that point lies within the triangle formed by a,b,c. */
bool pointLineComparison(Point& const p1, Point& const p2, Point const& c1, Point const& c2)
{
	float m, b;
	float res1, res2;

	m = (p1.getY() - p2.getY()) / (p1.getX() - p2.getY());
	b = m * p1.getX() - p2.getY();

	res1 = m * c1.getX() + b - c1.getY();
	res2 = m * c2.getX() + b - c2.getY();

	if ((res1 < 0 && res2 < 0 )|| (res1 > 0 && res2 > 0))
		return true;
	else
		return false;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (a == b || a == c || b == c)
		return false;

	if (pointLineComparison(&a, &point, &c, &b) 
		&& pointLineComparison(&b, &point, &a, &c)
		&& pointLineComparison(&c, &point, &a, &b))
	{
		std::cout << "Point in triangle!" << std::endl;
		return true;
	}	

	std::cout << "Point not in triangle!" << std::endl;
	return false;
}
