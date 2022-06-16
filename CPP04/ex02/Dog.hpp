#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _brainAttribute;

	public:
		Dog();
		~Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);

};

#endif