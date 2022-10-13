#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// const AAnimal* animal = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "This AAnimal is a " << j->getType() << std::endl;
	std::cout << "This AAnimal is a " << i->getType() << std::endl;

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	return 0;
}