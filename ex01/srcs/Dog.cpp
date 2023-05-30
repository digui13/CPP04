#include "../incs/Dog.hpp"

Dog::Dog(void)
{
	cout 	<< "Constructor Dog"
			<< endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
	cout 	<< "Copy Dog"
			<< endl;
	*this = obj;
	_brain = new Brain(*obj._brain);
}

Dog::~Dog(void)
{
	cout 	<< "Deconstructor Dog"
			<< endl;
	delete _brain;
}

Dog& Dog::operator=(const Dog &obj)
{
	cout 	<< "Assign Dog"
			<< endl;
	_type = obj._type;
	*_brain = *obj._brain;

	return (*this);
}

void Dog::makeSound(void) const
{
	cout 	<< "Sound: Woof Woof"
			<< endl;
}
