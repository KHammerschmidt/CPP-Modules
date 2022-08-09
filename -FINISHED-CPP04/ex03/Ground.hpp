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
		Ground(const Ground& other);
		Ground& operator=(const Ground& other);

		static void Add(AMateria* materia);
		static void	cleanUp(void);
		static void	RemoveGroundObj(AMateria* m);
};

#endif