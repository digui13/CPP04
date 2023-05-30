#include "../incs/Cure.hpp"


Cure::Cure(void)
{
	_type = "cure";
}

Cure::Cure(Cure const& obj)
{
	*this = obj;
}

Cure::~Cure(void) {}

Cure& Cure::operator=(Cure const& obj)
{
	(void)obj;
	return *this;
}

AMateria* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	cout	<< "* heals "
			<< target.getName() 
			<< "'s wounds *" 
			<< endl;
}
