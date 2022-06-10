#include "Point.hpp"

int	main(void)
{
	Point A (1.5, 5.6);
	Point B (8.0, 10.5);
	Point C (3.2, 3.4);

	Point P (20.3, -2.1);

	bsp(A, B, C, P);

	return 0;
}
