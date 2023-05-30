#include "incs/Animal.hpp"
#include "incs/Dog.hpp"
#include "incs/Cat.hpp"

int	main (void)
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Animal const* animals[10];

	for (int inc = 0; inc < 10; inc++) 
	{
		if (inc % 2 == 0)
			animals[inc] = new Dog();
		else
			animals[inc] = new Cat();
	}

	for (int idx = 0; idx < 10; idx++) 
		animals[idx]->makeSound();

	for (int idx = 0; idx < 10; idx++) 
		delete animals[idx];

	return (0);
}