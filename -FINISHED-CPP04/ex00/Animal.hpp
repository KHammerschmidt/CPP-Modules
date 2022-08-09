#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		virtual ~Animal();

		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);

		std::string getType(void) const;
		void		setType(std::string type);
		virtual void makeSound(void) const;
};

#endif