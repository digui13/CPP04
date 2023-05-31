#include "../incs/Cat.hpp"

Cat::Cat(void)
{
	cout 	<< "Constructor Cat"
			<< endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
	cout 	<< "Copy Cat"
			<< endl;
	*this = obj;
	_brain = new Brain(*obj._brain);
}

Cat::~Cat(void)
{
	delete _brain;
	cout 	<< "Deconstructor Cat"
			<< endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	cout 	<< "Assign Cat"
			<< endl;
	_type = obj._type;
	*_brain = *obj._brain;

	return (*this);
}

void Cat::makeSound(void) const
{
	cout 	<< "Sound: Miau Miau"
			<< endl;
}
