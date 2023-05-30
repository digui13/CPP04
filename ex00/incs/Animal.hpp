#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{
	protected:

		string _type;

	public:

		Animal(void);
		Animal(const Animal &obj);
		virtual ~Animal(void);
		Animal& operator=(const Animal &obj);
		virtual void makeSound(void) const;
		string getType(void) const;
};

#endif