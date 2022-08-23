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

	this->_values.push_back(num);
	std::cout << "Value of " << num << "\t added to vector! ";
	std::cout << "New Vector size: " << this->_values.size() << std::endl;
}

void	Span::addNumber(std::vector<int>::iterator a, std::vector<int>::iterator b)
{
	for (; a != b; a++)
		addNumber(*a);
}

int	Span::longestSpan(void)
{
	if (this->_values.size() < 2)
		throw std::out_of_range("No span possible");

	std::vector<int>::iterator min = std::min_element(this->_values.begin(), this->_values.end());
	std::vector<int>::iterator max = std::max_element(this->_values.begin(), this->_values.end());

	return std::abs(*max - *min);

}

int	Span::shortestSpan(void)
{
	if (this->_values.size() < 2)
		throw std::out_of_range("No span possible");

	int	prevVal = 0;
	std::sort(this->_values.begin(), this->_values.end());
	std::vector<int>::iterator itr;
	std::vector<int>Spans;

	for (itr = _values.begin(); itr != _values.end(); itr++)
	{
		if (itr != _values.begin())
			Spans.push_back(std::abs(prevVal - *itr));
		prevVal = *itr;
	}
	std::sort(Spans.begin(), Spans.end());
	return std::abs(Spans[0]);
}

const char* Span::ExceedingLimitations::what() const throw()
{
	return ("This span object cannot save any more elements!");
}

const char* Span::NoSpanFound::what() const throw()
{
	return ("No Span Found!");
}
