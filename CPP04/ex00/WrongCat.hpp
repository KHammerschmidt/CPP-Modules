#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : virtual public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);

	void	makeSound(void) const;
};

#endif