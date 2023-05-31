#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	
	private:

		Brain* _brain;

	public:

		Dog(void);
		Dog(const Dog &obj);
		virtual ~Dog(void);
		Dog& operator=(const Dog &obj);
		void makeSound(void) const;
};

#endif