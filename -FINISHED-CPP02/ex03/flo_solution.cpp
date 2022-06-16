// #include "Fixed.hpp"
// #include "Point.hpp"

// static float sign(const Point p1, const Point p2, const Point p3)
// {
//     return  ((p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat())
//             - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat()));
// }
// bool bsp(const Point a, const Point b, const Point c, const Point point)
// {
// 	float	d1, d2, d3;
// 	bool	has_neg, has_pos;

// 	d1 = sign(point, a, b);
// 	d2 = sign(point, b, c);
// 	d3 = sign(point, c, a);

// 	has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
// 	has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

// 	return !(has_neg && has_pos);
// }


// int	main(void)
// {
// 	Point A (0.0f, 0.0f);
// 	Point B (3.0f, 0.0f);
// 	Point C (0.0f, 3.0f);

// 	Point P (1.0f, 1.0f);

// 	// if (bsp(A, B, C, P))
// 	// 	std::cout << "Point in triangle!" << std::endl;
// 	// else
// 	// 	std::cout << "Point not in triangle!" << std::endl;

// 	return 0;
// }