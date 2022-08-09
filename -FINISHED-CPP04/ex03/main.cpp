#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void	func1(void)
{
	Ground ground;
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	src->learnMateria(new Ice());

	AMateria* tmp1 = src->createMateria("ice");
	ICharacter* bob = new Character("bob");

	me->equip(tmp1);
	me->unequip(0);
	me->equip(tmp1);

	me->use(0, *bob);

	delete bob;
	delete src;
	delete me;
}

void	func2(void)
{
	Ground ground;
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* carl = new Character("carl");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* tmp1 = src->createMateria("ice");
	AMateria* tmp2 = src->createMateria("cure");
	AMateria* tmp3 = src->createMateria("ice");
	AMateria* tmp4 = src->createMateria("cure");

	me->equip(tmp1);
	me->equip(tmp2);
	me->equip(tmp3);
	me->equip(tmp4);

	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(2);
	// me->unequip(3);
	me->unequip(4);

	me->use(0, *carl);
	me->use(1, *carl);
	me->use(2, *carl);
	me->use(3, *carl);
	// me->use(4, *carl);

	delete carl;
	delete src;
	delete me;
}

void funcSubject(void)
{
	Ground ground;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

int	main(void)
{
	funcSubject();
	// func1();
	// func2();
	// system("leaks materia");

	return 0;
}