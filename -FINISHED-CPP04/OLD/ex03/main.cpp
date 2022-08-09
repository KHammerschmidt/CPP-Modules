#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(void)
{
	//my tests
	// Ground ground;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Ice());

	// ICharacter* me = new Character("me");

	// AMateria* tmp1;
	// AMateria* tmp2;
	// AMateria* tmp3;
	// AMateria* tmp4;

	// tmp1 = src->createMateria("ice");
	// tmp2 = src->createMateria("cure");
	// tmp3 = src->createMateria("ice");
	// tmp4 = src->createMateria("cure");


	// me->equip(tmp1);
	// me->equip(tmp2);
	// me->equip(tmp3);
	// me->equip(tmp4);

	// // me->unequip(0);
	// // me->unequip(1);
	// // me->unequip(2);
	// // me->unequip(3);
	// me->unequip(4);


	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(3, *bob);
	// // me->use(4, *bob);

	// delete bob;
	// delete me;
	// delete src;

	// return 0;



	//main from subject
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

	return 0;
}