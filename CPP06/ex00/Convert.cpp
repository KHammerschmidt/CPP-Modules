#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input) {}
Convert::~Convert() {}

char	Convert::getChar(void) const { return this->_c; }
int		Convert::getInt(void) const { return this->_i; }
float	Convert::getFloat(void) const { return this->_f; }
double	Convert::getDouble(void) const { return this->_d; }

std::ostream& operator<<(std::ostream& os, const Convert& convert)
{
	if (!convert.getChar())
		os << "char: Non displayable" << std::endl;
	else
		os << "char: " << convert.getChar() << std::endl;
	
	if (!convert.getInt())
		os << "int: impossible" << std::endl;
	else
		os << "int: " << convert.getInt() << std::endl;

	if (!convert.getFloat())
		os << "float: nanf" << std::endl;
	else
		os << "float: " << convert.getFloat() << std::endl;

	if (!convert.getDouble())
		os << "double: nan" << std::endl;
	else
		os << "double: " << convert.getDouble() << std::endl;

	return os;
}

Convert::Convert(const Convert& copy)
{
	*this = copy;
}

Convert& Convert::operator=(const Convert& other)
{
	this->_c = other._c;
	this->_i = other._i;
	this->_f = other._f;
	this->_d = other._d;

	return *this;
}

int	Convert::fetchScalarType(std::string input)
{
	if (isChar(input))
		return C;
	// if (input == int)
	// 	return I;
	// if (input == float)
	// 	return F;
	// if (input == double)
	// 	return D;
	return 99;
}

void	Convert::convertScalarTypes(std::string input)
{
	switch (fetchScalarType(input))
	{
		case 0 :
			convertToChar(input);
			break ;
		// case 1 :
		// 	convertToInt(input);
		// 	break ;
		// case 2 :
		// 	convertToFloat(input);
		// 	break ;
		// case 3 :
		// 	convertToDouble(input);
		// 	break ;
		default:
		{
			std::cout << "Error: No valid scalar type for conversion found." << std::endl;
			std::cout << "Please enter a char/int/float/double literal." << std::endl;
			break ;
		}
	}
}

bool	Convert::isChar(std::string input)
{
	if (input.length() > 1 || std::isdigit(input[0]))
		return false;
	return true;
}

void	Convert::convertToChar(std::string input)
{
	this->_c = input[0]; //input[0].c_str();
	this->_i = static_cast<int>(this->_c);
	this->_f = static_cast<float>(this->_c);
	this->_d = static_cast<double>(this->_c);
}

		// void	convertToInt(std::string input);
		// void	convertToChar(std::string input);
		// void	convertToFloat(std::string input);
		// void	convertToDouble(std::string input);