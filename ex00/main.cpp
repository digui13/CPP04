#include "incs/Animal.hpp"
#include "incs/Dog.hpp"
#include "incs/Cat.hpp"

int	main (void)
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	return (0);
}