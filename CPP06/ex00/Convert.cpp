#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input) {}
Convert::~Convert() {}

// char		Convert::getChar(void) const { return this->_c; }
// int		Convert::getInt(void) const { return this->_i; }
// float	Convert::getFloat(void) const { return this->_f; }
// double	Convert::getDouble(void) const { return this->_d; }
// int		Convert::getFlag(void) const { return this->_flag; }

Convert::Convert(const Convert& copy)
{
	*this = copy;
}

Convert& Convert::operator=(const Convert& other)
{
	// this->_c = other.getChar();
	// this->_i = other.getInt();
	// this->_f = other.getFloat();
	// this->_d = other.getDouble();
	// this->_flag = other.getFlag();

	this->_input = other._input;
	this->_val = other._val;
	this->_scalarType = other._scalarType;

	return *this;
}

void	Convert::fetchScalarType(std::string input)
{
	if (isChar(input))
		this->_scalarType = C;
	else if (isInt(input))
		this->_scalarType = I;
	else if (isFloat(input))
		this->_scalarType = F;
	else if (isDouble(input))
		this->_scalarType = D;
	else
	{
		this->_scalarType = -1;
		return ;
	}


	// if (isChar(input))
	// 	return C;
	// if (isInt(input))
	// 	return I;
	// if (isFloat(input))
	// 	return F;
	// if (isDouble(input))
	// 	return D;
	// return -1;
}

void	Convert::convertScalarTypes(std::string input)
{
	fetchScalarType(input);
	if (this->_scalarType == -1)
	{
		std::cout << "Error: No valid scalar type for conversion found." << std::endl;
		std::cout << "Please enter a char/int/float/double literal." << std::endl;
		return ;
	}
	if (this->_scalarType != C)
		this->_val = std::strtod(input.c_str());

	convertChar(input);
	convertInt(input);
	convertFloat(input);
	convertDouble(input);

	// switch (fetchScalarType(input))
	// {
	// 	case C :
	// 		convertChar(input);
	// 		break ;
	// 	case I :
	// 		convertInt(input);
	// 		break ;
	// 	case F :
	// 		convertFloat(input);
	// 		break ;
	// 	case D :
	// 		convertDouble(input);
	// 		break ;
	// 	default:
	// 	{
	// 		std::cout << "Error: No valid scalar type for conversion found." << std::endl;
	// 		std::cout << "Please enter a char/int/float/double literal." << std::endl;
	// 		return ;
	// 	}
	// }
	// printTypes();
}

static const std::string pseudoLitsFloat[] = {"-inff", "+inff", "nanf"};
static const std::string pseudoLitsDouble[] = {"-inf", "+inf", "nan"};

bool	Convert::isChar(std::string str)
{
	if (str.length() > 1 || std::isdigit(str[0]))
		return false;

	std::cout << "Input is of type char!" << std::endl;
	return true;
}

bool	Convert::checkDigits(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

// std::fixed --> Anzeige kommastelle, set precision einstellen wie viele kommastellen

bool	Convert::isInt(std::string str)
{
	if (str.find('.') != std::string::npos || !checkDigits(str))
		return false;
	std::cout << "Input is of type int!" << std::endl;
	return true;

	//loop through string and check if there are only numbers

	// for (size_t i = 0; i < str.length(); i++)
	// {
	// 	if (!std::isdigit(str[i]))
	// 		return false;
	// }
}

/* Check for float specifics, e.g. dot, 'f' at the end of te string and
only digits as well as pseudo literals "-/+inff, nanf" */
bool Convert::isFloat(std::string str)
{
	size_t dot = str.find('.');

	if (dot == std::string::npos || str.find('f') != str.length() - 1)
		return false;
	if ((str.find('.', dot + 1) == std::string::npos
		&& compareDigits(str, str.length() - 1))
		|| comparePseudoLitsFloat(str))
	{
		std::cout << "Input is of type float!" << std::endl;
		return true;
	}
	return false;
}

bool	Convert::comparePseudoLitsFloat(std::string str)
{
	for (int i = 0; i < 3; i++)
	{
		if (str.compare(pseudoLitsFloat[i]) == 0)
		{
			this->_flag = F;
			this->_pseudo = pseudoLitsFloat[i];
			return true;
		}
	}
	return false;
}

bool	Convert::compareDigits(std::string str, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{

		if (!isdigit(str[i]) && str[i] != '.')
			return false;
	}
	return true;
}

bool Convert::isDouble(std::string str)
{
	size_t dot = str.find('.');
	if (dot == std::string::npos && !compareDigits(str, str.length()))
		return false;
	if (dot != std::string::npos && str.find('.', dot + 1) == std::string::npos
		&& compareDigits(str, str.length()))
		{
			std::cout << "Input is of type double!" << std::endl;
			return true;
		}
	std::cout << "Double: dot/digit check					[√]" << std::endl;

	for (int i = 0; i < 3; i++)
	{
		if (str.compare(pseudoLitsDouble[i]) == 0)
		{
			std::cout << "Input is of type double!" << std::endl;
			this->_flag = D;
			return true;
		}
	}
	std::cout << "Double: pseudo literals check				[√]" << std::endl << std::endl;
	return false;
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
	this->_val = std::stod(str);
	if (this->_val < std::numeric_limits<int>::min() || this->_val > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(this->_val);


// 	this->_i = std::strtol(str.c_str(), NULL, 10);
// 	this->_c = static_cast<char>(this->_i);
// 	this->_f = static_cast<float>(this->_i);
// 	this->_d = static_cast<double>(this->_i);
}

void	Convert::convertFloat(std::string str)
{
	this->_f = std::stod(str);
	this->_c = static_cast<char>(this->_f);
	this->_i = static_cast<int>(this->_f);
	this->_d = static_cast<double>(this->_f);
}

// bool	Convert::limitTestDouble(double d)
// {
// 	if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
// 		return false;
// 	return true;
// }

// bool	Convert::limitTestFloat(float f)
// {
// 	if (f < std::numeric_limits<float>::min())
// 	{
// 		std::cout << "float: -inff" << std::endl;
// 		return false;
// 	}
// 	if (f > std::numeric_limits<float>::max())
// 	{
// 		std::cout << "float: +inff" << std::endl;
// 		return false;
// 	}
// 	return true;
// }

void Convert::convertDouble(std::string str)
{
	this->_d = std::stod(str);
	// if (limitTest(this->_d))
	// {
	// }
	// 	this->_d = 0;
	// if (std::numeric_limits<double>(this->_d) )
	this->_c = static_cast<char>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_f = static_cast<float>(this->_d);
}

void	Convert::printTypes(void) const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void	Convert::printChar(void) const
{
	//check if char is printable // best converted to unsigned char first
	if (!std::isprint(this->_c))
		std::cout << "char: Non displayable" << std::endl;
	else if (!isascii(this->_c))
		std::cout << "char: Impossible" << std::endl;
	else
		std::cout << "char: " << this->getChar() << std::endl;
}

bool	Convert::limitTestInt(int i) const
{
	std::cout << "int: hihihhiihhii" << " " << std::endl;
	if (i > std::numeric_limits<int>::max())
		std::cout << "int: LULULLUU" << std::endl;
	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
	{
		std::cout << "int: impossible" << std::endl;
		return false;
	}
	return true;
}

void	Convert::printInt(void) const
{
	if (limitTestInt(this->_i))
		return ;
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

