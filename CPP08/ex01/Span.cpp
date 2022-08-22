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

// void	Span::addMoreNumbers(int num)
// {
// 	if (this->_values.size() == this->_n - 1)
// 		throw Span::ExceedingLimitations();
// 	else
// 	{
// 		std::vector<int>::iterator 	itr1 = _values.begin();
// 		// std::vector<int>::iterator	itr2 = _values.end();
// 		srand(time(NULL));
// 		for (itr1 = _values.begin(); *itr1 < num; itr1++)
// 		{
// 			if (static_cast<int>(_n) - 1 > std::abs(*itr1))
// 				break ;
// 			// if (static_cast<unsigned int>(*itr) == _n - 1)
// 				// break ;
// 			std::cout << "here" << std::endl;
// 			int val = rand();
// 			Span::addNumber(val + 215 - 18);
// 			std::cout << val + 215 - 18 << "has been added" << std::endl;
// 			// for (itr2 = this->_values.end())
// 			// int val = rand();
// 		}
// 	}
// }

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

int	Span::longestSpan(void)
{
	if (this->_values.size() < 2)
		throw std::out_of_range("No span possible");
	//error: when values.size < 2 (abort because of exception)
	
	std::sort(this->_values.begin(), this->_values.end());
	std::vector<int>::iterator itr = _values.begin();

	int min = *itr;
	int max = *itr;
	for (itr = _values.begin(); itr != _values.end(); itr++)
	{
		if (*itr <= min)
			min = *itr;
		if (*itr > min && *itr > max)
			max = *itr;
	}
	return std::abs(min - max);
}

int	Span::shortestSpan(void)
{	
	if (this->_values.size() < 2)
		throw std::out_of_range("No span possible");
	//error: when values.size < 2 (abort because of exception)

	int	prevVal = 0;
	std::sort(this->_values.begin(), this->_values.end());
	std::vector<int>::iterator itr = _values.begin();
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


//version with variables
// int	Span::shortestSpan(void)
// {
// 	if (this->_values.size() < 2)
// 		return (throw std::out_of_range("No span possible"));

// 	int	val = 0;
// 	int spanOld = 0;
// 	int	spanNew = 0;
// 	std::sort(this->_values.begin(), this->_values.end());	//sorting all numbers in vector
// 	std::vector<int>::iterator itr = _values.begin();		//determine start of iterator

// 	for (itr = _values.begin(); itr != _values.end(); itr++)
// 	{
// 		if (itr != _values.begin())
// 		{
// 			spanOld = std::abs((val) - *itr);
// 			if (spanOld < spanNew || spanNew == 0)
// 				spanNew = spanOld;
// 			std::cout << "SpanOld: " << spanOld << " spanNew: " << spanNew << std::endl;
// 			std::cout << "Itr value vector: " << *itr << " Value: " << val << "  spanNew: " << spanNew << std::endl;
// 		}
// 		val = *itr;
// 	}
// 	return spanNew;
// }