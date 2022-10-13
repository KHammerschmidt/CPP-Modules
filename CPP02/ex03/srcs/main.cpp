#include "Point.hpp"

int	main(void)
{
	Point A (0.0f, 0.0f);
	Point B (3.0f, 0.0f);
	Point C (0.0f, 3.0f);

	Point P (1.0f, 1.0f);

	// if (bsp(A, B, C, P))
	// 	std::cout << "Point in triangle!" << std::endl;
	// else
	// 	std::cout << "Point not in triangle!" << std::endl;

	bsp(A, B, C, P);

	return 0;
}
