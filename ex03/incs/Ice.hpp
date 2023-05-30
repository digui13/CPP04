#ifndef ICE_HPP
#define ICE_HPP

#include "headers.hpp"

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:

		Ice(void);
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
		~Ice(void);

		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif