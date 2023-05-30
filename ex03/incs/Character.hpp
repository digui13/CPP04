#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "headers.hpp"

#include "ICharacter.hpp"


class Character : public ICharacter
{

	private:

		AMateria	*_inv[4];
		string		_name;

	public:

		Character(void);
		Character(const string &name);
		Character(const Character &other);
		~Character(void);
		Character& operator=(Character const& other);

		string const& getName() const;

		void equip(AMateria* obj);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
