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
	if (this->_values.size() < this->_n)
		this->_values.push_back(num);
	else
		throw ExceedingLimitations();
}

int	Span::shortestSpan(void)
{
	std::vecto
}

const char* Span::ExceedingLimitations::what() const throw()
{
	return ("This span object cannot save any more elements!");
}

const char* Span::NoSpanFound::what() const throw()
{
	return ("No Span Found!")
}