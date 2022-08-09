#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
private:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);

	std::string getType(void) const;
	void		setType(std::string type);
	void		makeSound(void) const;

	virtual ~WrongAnimal();
};

#endif