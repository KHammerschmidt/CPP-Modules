#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input) {}
Convert::~Convert() {}

char	Convert::getChar(void) const { return this->_c; }
int		Convert::getInt(void) const { return this->_i; }
float	Convert::getFloat(void) const { return this->_f; }
double	Convert::getDouble(void) const { return this->_d; }

Convert::Convert(const Convert& copy)
{
	*this = copy;
}

Convert& Convert::operator=(const Convert& other)
{
	this->_c = other.getChar();
	this->_i = other.getInt();
	this->_f = other.getFloat();
	this->_d = other.getDouble();

	return *this;
}

int	Convert::fetchScalarType(std::string input)
{
	if (isChar(input))
		return C;
	if (isInt(input))
		return I;
	if (isFloat(input))
		return F;
	if (isDouble(input))
		return D;
	return -1;
}

void	Convert::convertScalarTypes(std::string input)
{
	switch (fetchScalarType(input))
	{
		case C :
			convertChar(input);
			break ;
		case I :
			convertInt(input);
			break ;
		case F :
			convertFloat(input);
			break ;
		case D :
			convertDouble(input);
			break ;
		default:
		{
			std::cout << "Error: No valid scalar type for conversion found." << std::endl;
			std::cout << "Please enter a char/int/float/double literal." << std::endl;
			return ;
		}
	}
	printChar();
	printInt();
	printFloat();
	printDouble();
}

bool	Convert::isChar(std::string str)
{
	//check if it is only one character // check if 
	if (str.length() > 1 || std::isdigit(str[0]))
		return false;
	std::cout << "Input is of type char!" << std::endl;
	return true;
}

bool	Convert::isInt(std::string str)
{
	//check if there is a dot within the input (would indicate float or double)
	if (str.find('.') != std::string::npos)
		return false;
	//loop through string and check if there are only numbers
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	std::cout << "Input is of type int!" << std::endl;
	return true;
}

bool Convert::isFloat(std::string str)
{
	size_t dot = str.find('.');
	if (dot == std::string::npos)
		return false;
	// check for invalid input with two dots
	if (str.find('.', dot + 1) != std::string::npos)
		return false;
	if (str.find('f') != str.length() - 1)
		return false;
	
	std::cout << "Input is of type float!" << std::endl;
	return true;
}

bool Convert::isDouble(std::string str)
{
	size_t dot = str.find('.');
	if (dot == std::string::npos)
		return false;
	// check for invalid input with two dots
	if (str.find('.', dot + 1) != std::string::npos)
		return false;
	std::cout << "Input is of type double!" << std::endl;
	return true;
}

void	Convert::convertChar(std::string str)
{
	this->_c = str[0];
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
}

void	Convert::convertInt(std::string str)
{
	this->_i = std::strtol(str.c_str(), NULL, 10);	// std::strtol(str, NULL, 10);
	this->_c = static_cast<char>(this->_i);
	this->_f = static_cast<float>(this->_i);
	this->_d = static_cast<double>(this->_i);
}

void	Convert::convertFloat(std::string str)
{
	this->_d = std::stof(str);
	this->_c = static_cast<char>(this->_i);
	this->_i = static_cast<int>(this->_d);
	this->_d = static_cast<double>(this->_i);
}

void Convert::convertDouble(std::string str)
{
	this->_d = std::stod(str);
	this->_c = static_cast<char>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_f = static_cast<float>(this->_d);
}

void	Convert::printChar(void) const
{
	//check if char is printable // best converted to unsigned char first
	if (!std::isprint(this->_c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << this->getChar() << std::endl;
}

void	Convert::printInt(void) const
{
	std::cout << "Int: " << this->getInt() << std::endl;
}

void Convert::printFloat(void) const
{
	std::cout << "Float: " << this->getFloat() << std::endl;
}

void	Convert::printDouble(void) const
{
	std::cout << "Double: " << this->getDouble() << std::endl;
}



// strtod
// ranges
// long int 		8bytes 		-2,147,483,648	to 	2,147,483,647
// long long int 	8bytes 		-(2^63) 		to 	(2^63)-1
// int 				4bytes 		-2,147,483,648 	to 	2,147,483,647
// float 			4bytes 	
// double 			8bytes
// long double 		12bytes


// Type 	Significant 	digits 	Number of bytes
// float 	6 - 7 			4
// double 	15 - 16 		8


// float 		1.175494351 E - 38 	3.402823466 E + 38
// double 		2.2250738585072014 E - 308 	1.7976931348623158 E + 308
