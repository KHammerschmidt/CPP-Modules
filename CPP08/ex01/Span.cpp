#include "Span.hpp"

Span::Span(unsigned int N) : _n(N) { }

Span::~Span() { }

Span::Span(Span const& other)
{
	*this = other;
}

Span& Span::operator=(Span const& other)
{
	this->_n = other._n;
	this->_values = other._values;

	return *this;
}

void	Span::addNumber(int num)
{
	if (this->_values.size() == this->_n - 1)
		throw Span::ExceedingLimitations();
	else
	{
		this->_values.push_back(num);
		std::cout << "Value of " << num << " added to vector! ";
		std::cout << "New Vector size: " << this->_values.size() << std::endl;
	}
}

int	Span::shortestSpan(void)
{
	if (this->_values.size() < 2)
		throw std::out_of_range("No span possible");

	int	val = 0;
	int spanOld = 0;
	int	spanNew = 0;
	// std::vector<int>Spans;
	std::sort(this->_values.begin(), this->_values.end());	//sorting all numbers in vector
	std::vector<int>::iterator itr = _values.begin();		//determine start of iterator

	for (itr = _values.begin(); itr != _values.end(); itr++)
	{
		if (itr != _values.begin())
		{
			spanOld = std::abs((val) - *itr);
			if (spanOld < spanNew || spanNew == 0)
				spanNew = spanOld;
			std::cout << "SpanOld: " << spanOld << " spanNew: " << spanNew << std::endl;
			std::cout << "Itr value vector: " << *itr << " Value: " << val << "  spanNew: " << spanNew << std::endl;
		}
		val = *itr;
	}



	// {
	// 	if (itr != _values.begin())
	// 	{
	// 		std::cout << "Here" << std::endl;
	// 		val = _values[*itr + 1] - _values[*itr];
	// 	}
	// 	std::cout << "first value: " << _values[*itr + 1] << "  second value: " << _values[*itr + 1] << std::endl;
	// 	// val = (*itr + 1) - *itr;
	// 	if (val < span)
	// 		span = val;
	// 	// else
	// 	// {
	// 	// 	span = *itr - val;
	// 	// 	std::cout << span << std::endl;
	// 	// 	Spans.push_back(*itr - val);
	// 	// 	std::cout << *itr - val << std::endl;
	// 	// 	val = *itr;

	// 	// }
	// 	// if (itr == _values.begin())
	// 	// 	val = *itr;
	// 	std::cout << val << std::endl;
	// 	std::cout << span << std::endl;
	// }

	// std::sort(Spans.begin(), Spans.end());
	// std::cout << Spans.begin() << std::endl;
	// return (Spans.begin());
	return 0;
}

const char* Span::ExceedingLimitations::what() const throw()
{
	return ("This span object cannot save any more elements!");
}

const char* Span::NoSpanFound::what() const throw()
{
	return ("No Span Found!");
}