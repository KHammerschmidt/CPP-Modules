#include "Span.hpp"

int	main(void)
{
	Span sp = Span(6);

	try
	{
		sp.addNumber(-2);
		sp.addNumber(13);
		sp.addNumber(24);
		sp.addNumber(15);
		sp.addNumber(-100);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	sp.shortestSpan();

	return 0;
}