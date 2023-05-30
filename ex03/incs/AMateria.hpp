#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "headers.hpp"

class ICharacter;

class AMateria
{
	private:

		static AMateria** _dropped;

	protected:

		string	_type;
	
	public:

		AMateria(void);
		AMateria(string const& type);
		AMateria(const AMateria &obj);
		virtual ~AMateria(void);
		AMateria &operator=(AMateria const& obj);

		string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		void drop();
		static void clean();
};

#endif