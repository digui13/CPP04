#include "incs/headers.hpp"
#include "incs/AMateria.hpp"
#include "incs/Ice.hpp"
#include "incs/Cure.hpp"
#include "incs/ICharacter.hpp"
#include "incs/Character.hpp"
#include "incs/IMateriaSource.hpp"
#include "incs/MateriaSource.hpp"

int	main(void)
{

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

	return (0);
}