#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);

		void	makeSound(void) const;

};

#endif