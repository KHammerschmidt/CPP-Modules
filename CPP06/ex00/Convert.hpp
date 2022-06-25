#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

enum { C, I, F, D};

class Convert
{
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;

		const std::string _input;
	
	public:
		Convert(std::string input);
		~Convert();
		Convert(const Convert& copy);
		Convert& operator=(const Convert& other);

		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;

		bool	isChar(std::string input);

		void	convertToChar(std::string input);
		// void	convertToInt(std::string input);
		// void	convertToFloat(std::string input);
		// void	convertToDouble(std::string input);

		void	convertScalarTypes(std::string input);
		int		fetchScalarType(std::string input);
};

std::ostream& operator<<(std::ostream& os, const Convert& convert);

#endif