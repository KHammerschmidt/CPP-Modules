#include "Span.hpp"

int	main(void)
{
	Span sp = Span(6);

	try
	{
		//Test with calling addNumber() to add single number
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		//Test with two vector iterators to add multiple numbers
		// std::vector<int> test;
		// test.push_back(33);
		// test.push_back(34);
		// test.push_back(35);
		// test.push_back(36);
		// std::vector<int>::iterator a = test.begin();
		// std::vector<int>::iterator b = test.end();
		// sp.addNumber(a, b);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}