#include "../incs/Cat.hpp"

Cat::Cat(void)
{
	cout 	<< "Constructor Cat"
			<< endl;
	_type = "Cat";
}

Cat::Cat(const Cat &obj)
{
	cout 	<< "Copy Cat"
			<< endl;
	*this = obj;
}

Cat::~Cat(void)
{
	cout 	<< "Deconstructor Cat"
			<< endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	cout 	<< "Assign Cat"
			<< endl;
	_type = obj._type;

	return (*this);
}

void Cat::makeSound(void) const
{
	cout 	<< "Sound: Miau Miau"
			<< endl;
}
