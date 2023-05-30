#ifndef CURE_HPP
#define CURE_HPP

#include "headers.hpp"

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	public:

		Cure(void);
		Cure(const Cure &obj);
		Cure& operator=(const Cure &obj);
		~Cure(void);

		AMateria* clone(void) const;
		void use(ICharacter &target);
};

#endif