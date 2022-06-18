#ifndef GROUND_HPP
#define GROUND_HPP

#include "AMateria.hpp"

class AMateria;

class Ground
{
	private:
		struct node
		{
			node* next;
			AMateria* save;
		};

		static node* head;
		static node* current;

	public:
		Ground();
		~Ground();

		static void Add(AMateria* materia);
		void		cleanUp(void);
};

#endif