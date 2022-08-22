#include "iter.hpp"

#include <iostream>
#include <cstdlib>

template<typename T>
void	Print(T& val)
{
	std::cout << val << std::endl;
}

int	main(void)
{
	Print("First Test. Test with string array!");
	std::string arr[2];

	arr[0] = "Hallo mein Name ist: ";
	arr[1] = "Katharina";

	iter(arr, 2, &Print);

	Print("Second Test. IntArray with random values");

	int *intArr = new int[3];
	srand(time(NULL));
	for (size_t i = 0; i < 3; i++)
		intArr[i] = std::rand() % 20 + 1;

	iter(intArr, 3, &Print);

	return 0;
}

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
// int main() {
// int tab[] = { 0, 1, 2, 3, 4 };
// Awesome tab2[5];

// iter( tab, 5, print );
// iter( tab2, 5, print );

// return 0;
// }