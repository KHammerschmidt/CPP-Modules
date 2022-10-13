#include "Point.hpp"

/* Calculates line equation and checks whether points c1 & c2 lie on
   opposite sides of the line. When being performed with a,b,c and true
   indicates that point lies within the triangle formed by a,b,c. */
bool pointLineComparison(const Point& p1, const Point& p2, const Point& c1, const Point& c2)
{
	float m, b;
	float res1, res2;

	m = (p1.getY().toFloat() - p2.getY().toFloat()) / (p1.getX().toFloat() - p2.getY().toFloat());
	b = (m * p1.getX().toFloat() - p2.getY().toFloat()) * (-1);

	res1 = (m * c1.getX().toFloat()) + b - c1.getY().toFloat();
	res2 = (m * c2.getX().toFloat()) + b - c2.getY().toFloat();

	if ((res1 < 0 && res2 > 0 ) || (res1 > 0 && res2 < 0))
		return true;
	else
		return false;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (pointLineComparison(a, point, c, b)
		&& pointLineComparison(b, point, c, a)
		&& pointLineComparison(c, point, b, a))
		{
			std::cout << "Point in triangle!" << std::endl;
			return true;
		}
	std::cout << "Point not in triangle!" << std::endl;
	return false;
}
