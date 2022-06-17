#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* _brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);

		void	makeSound(void) const;

};

#endif