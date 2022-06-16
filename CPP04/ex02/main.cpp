#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	const AAnimal* animal = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;
	delete i;
	delete animal;


	// system("leaks brain");

	return 0;
}