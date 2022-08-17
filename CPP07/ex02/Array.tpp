#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
	: _arr(new T[0]), _size(0)
{
	// std::cout << "Default constructor called." << std::endl;
	this->_size = 0;
	this->_arr = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
	: _arr(new T[n]), _size(n)
{
	// std::cout << "unsigned int constructor called." << std::endl;
}

template<typename T>
Array<T>::Array(const Array<T>& other)
{
	this->_arr = new T[other.size()];
	_size = other.size();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] = other._arr[i];
	// std::cout << "Copy constructor called." << std::endl;
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return this->_size;
}

template<typename T>
Array<T>::~Array(void)
{
	// std::cout << "Destructor called." << std::endl;
	delete[] this->_arr;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this == other)
		return *this;
	if (this->_arr != NULL)
		delete[] _arr;
	this->_size = other._size;
	this->_arr = new T[other._size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] = other._arr[i];

	return *this;
}

template<typename T>
T&	Array<T>::operator[](unsigned int const pos) const
{
	if (pos >= this->_size || pos < 0)
		throw std::out_of_range("Index inaccessable");
	return this->_arr[pos];
}

template<typename T>
std::ostream& operator<<(std::ostream& cout, const Array<T>& input)
{
	if (input.size() == 0)
		return cout;
	for (unsigned int i = 0; i <= input.size(); i++)
		cout << input._arr[i] << " | ";
	cout << std::endl;

	return cout;
}
