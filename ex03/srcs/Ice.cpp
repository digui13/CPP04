#include "../incs/Ice.hpp"

Ice::Ice(void)
{
	_type = "ice";
}

Ice::Ice(Ice const& obj) 
{
	*this = obj;
}

Ice::~Ice(void) {}

Ice& Ice::operator=(Ice const& obj) 
{
	(void)obj;
	return *this;
}

AMateria* Ice::clone(void) const 
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) 
{
	cout	<< "* shoots an ice bolt at " 
			<< target.getName()
			<< " *" 
			<< endl;
}