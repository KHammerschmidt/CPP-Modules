#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		Brain* _brainAttribute;
	public:
		Cat();
		~Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);

};

#endif