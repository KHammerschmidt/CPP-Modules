#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"


//getBrain einfügen

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog();
		~Dog();

		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);

		void makeSound(void) const;
};

#endif