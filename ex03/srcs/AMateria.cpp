#include "../incs/AMateria.hpp"

AMateria** AMateria::_dropped = NULL;

AMateria::AMateria(void) {}

AMateria::AMateria(string const& type)
{
	_type = type;
}

AMateria::AMateria(AMateria const& other)
{
	*this = other;
}

AMateria::~AMateria(void) {}

AMateria& AMateria::operator=(AMateria const& other)
{
	_type = other._type;

	return *this;
}

string const& AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	cout	<< "<" 
			<< getType() 
			<< ">"
			<< " hits "
			<< "someone"
			<< endl;
	(void) target;
}

void AMateria::drop()
{
	AMateria 	**new_dropper;
	int 		idx_max;
	int			idx;
	
	idx_max = 0;
	idx = 0;
	if (_dropped != NULL)
	{
		while (_dropped[idx_max] != NULL)
		{
			if (_dropped[idx_max] == this)
				return ;
			idx_max++;
		}
	}
	new_dropper = new AMateria*[idx_max + 2];
	while (idx < idx_max)
	{
		new_dropper[idx] = _dropped[idx];
		idx++;
	}
	new_dropper[idx] = this;
	new_dropper[idx + 1] = NULL;
	delete[] (_dropped);
	_dropped = new_dropper;
}

void AMateria::clean()
{
	int idx;
	
	idx = 0;
	if (_dropped != NULL)
		while (_dropped[idx] != NULL)
		{
			delete (_dropped[idx]);
			idx++;
		}
	
	cout	<< "All items dropped got vanish!" 
			<< endl;
}
