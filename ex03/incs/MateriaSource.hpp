#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "headers.hpp"

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	private:

		AMateria *_inv[4];

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		~MateriaSource(void);
		MateriaSource& operator=(const MateriaSource &obj);

		void learnMateria(AMateria* obj);
		AMateria* createMateria(string const& type);
};

#endif
