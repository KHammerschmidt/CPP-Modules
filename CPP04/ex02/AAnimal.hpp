#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal(const AAnimal& animal);
		AAnimal& operator=(const AAnimal& animal);

		std::string  getType(void) const;
		void		 setType(std::string type);
		virtual void makeSound(void) const = 0;

		virtual ~AAnimal();
};

#endif