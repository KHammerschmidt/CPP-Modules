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

		virtual AAnimal& operator=(const AAnimal& animal);

		virtual std::string getType(void) const;
		virtual void		setType(std::string type);
		virtual void		makeSound(void) const = 0;

		virtual ~AAnimal();
};

#endif