#include "../incs/Dog.hpp"

Dog::Dog(void)
{
	cout 	<< "Constructor Dog"
			<< endl;
	_type = "Dog";
}

Dog::Dog(const Dog &obj)
{
	cout 	<< "Copy Dog"
			<< endl;
	*this = obj;
}

Dog::~Dog(void)
{
	cout 	<< "Deconstructor Dog"
			<< endl;
}

Dog& Dog::operator=(const Dog &obj)
{
	cout 	<< "Assign Dog"
			<< endl;
	_type = obj._type;

	return (*this);
}

void Dog::makeSound(void) const
{
	cout 	<< "Sound: Woof Woof"
			<< endl;
}
