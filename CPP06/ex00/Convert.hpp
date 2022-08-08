#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
// #include <limits>
// #include <numeric_limits>
#include <cstdlib>
#include <cctype>

enum { C, I, F, D};

class Convert
{
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;

		const std::string _input;
		int		_flag;

	public:
		Convert(std::string input);
		~Convert();
		Convert(const Convert& copy);
		Convert& operator=(const Convert& other);

		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;
		int		getFlag(void) const;

		bool	isChar(std::string input);
		bool	isInt(std::string input);
		bool	isFloat(std::string input);
		bool	isDouble(std::string input);

		void	convertChar(std::string str);
		void	convertInt(std::string str);
		void	convertFloat(std::string str);
		void	convertDouble(std::string str);

		void	printTypes() const;
		void	printChar() const;
		void	printInt() const;
		void	printFloat() const;
		void	printDouble() const;

		void	convertScalarTypes(std::string input);


		bool	compareDigits(std::string str);
		int		fetchScalarType(std::string input);
};

#endif