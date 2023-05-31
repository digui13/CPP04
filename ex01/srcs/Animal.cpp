#include "../incs/Animal.hpp"

Animal::Animal(void)
{
	cout 	<< "Constructor Animal"
			<< endl;
	_type = "Animal";
}

Animal::Animal(const Animal &obj)
{
	cout 	<< "Copy Animal"
			<< endl;
	*this = obj;
}

Animal::~Animal(void)
{
	cout 	<< "Deconstructor Animal"
			<< endl;
}

Animal& Animal::operator=(const Animal &obj)
{
	cout 	<< "Assign Animal"
			<< endl;
	_type = obj._type;

	return (*this);
}

void Animal::makeSound(void) const
{
	cout 	<< "Sound: ..."
			<< endl;
}

string Animal::getType(void) const
{
	return (_type);
}