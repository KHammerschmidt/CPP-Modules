#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : virtual public Animal
{
	private:

	public:
		Dog();
		~Dog();

		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);

};

#endif