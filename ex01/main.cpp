#include "incs/Dog.hpp"
#include "incs/Cat.hpp"

int	main (void)
{

	cout << endl;
	cout << "Deep copy demonstration" << endl;
	cout << endl;

	Animal *basic = new Dog();
	{
		Animal *tmp(basic);
		Animal *tmp2;

		tmp2 = basic;

		tmp->makeSound();
		tmp2->makeSound();
	}
	basic->makeSound();

	delete basic;
	
	cout << endl;
	cout << "Animal Array" << endl;
	cout << endl;

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