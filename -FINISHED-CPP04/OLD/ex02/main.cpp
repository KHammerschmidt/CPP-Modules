#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// const AAnimal* animal = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	// system("leaks abstract");

	return 0;
}