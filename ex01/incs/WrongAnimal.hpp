#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
	protected:

		string _type;

	public:

		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal &obj);
		void makeSound(void) const;
		string getType(void) const;
};

#endif