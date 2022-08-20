#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_values;

	public:
		Span(unsigned int N);
		Span(Span const& other);
		Span& operator=(Span const& other);
		~Span();

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();

	class ExceedingLimitations : public std::exception
	{
		const char* what() const throw();
	};

	class NoSpanFound : public std::exception
	{
		const char* what() const throw();
	};
};


#endif