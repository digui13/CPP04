#include "incs/Animal.hpp"
#include "incs/Dog.hpp"
#include "incs/Cat.hpp"
#include "incs/WrongAnimal.hpp"
#include "incs/WrongCat.hpp"

int	main (void)
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* l = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	l->makeSound();

	delete meta;
	delete j;
	delete i;
	delete l;

	return (0);
}