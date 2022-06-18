#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
// #include "IMateriaSource.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);

		void use(ICharacter& target);
		AMateria* clone() const;

		virtual ~Cure();
};

#endif