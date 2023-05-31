#include "../incs/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	cout 	<< "Constructor WrongAnimal"
			<< endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	cout 	<< "Copy WrongAnimal"
			<< endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal(void)
{
	cout 	<< "Deconstructor WrongAnimal"
			<< endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
	cout 	<< "Assign WrongAnimal"
			<< endl;
	_type = obj._type;

	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	cout 	<< "Sound: NANI!?"
			<< endl;
}

string WrongAnimal::getType(void) const
{
	return (_type);
}