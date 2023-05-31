#include "../incs/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	cout 	<< "Constructor WrongCat"
			<< endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	cout 	<< "Copy WrongCat"
			<< endl;
	*this = obj;
}

WrongCat::~WrongCat(void)
{
	cout 	<< "Deconstructor WrongCat"
			<< endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
	cout 	<< "Assign WrongCat"
			<< endl;
	_type = obj._type;

	return (*this);
}

void WrongCat::makeSound(void) const
{
	cout 	<< "Sound: SWIIIIN"
			<< endl;
}
