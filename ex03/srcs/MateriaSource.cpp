#include "../incs/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		_inv[idx] = NULL;
		idx++;
	}	
}

MateriaSource::MateriaSource(MateriaSource const& obj)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		delete (_inv[idx]);
		idx++;
	}

	idx = 0;
	while (idx < 4)
	{
		_inv[idx] = obj._inv[idx];
		idx++;
	}
}

MateriaSource::~MateriaSource(void)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		delete (_inv[idx]);
		idx++;
	}	
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	int	idx;

	delete[] (*_inv);
	idx = 0;
	while (idx < 4)
	{
		_inv[idx] = obj._inv[idx];
		idx++;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* obj)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		if (_inv[idx] == NULL)
		{
			_inv[idx] = obj;
			return ;
		}
		idx++;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		if (_inv[idx] != NULL)
			if (type == _inv[idx]->getType())
				return (_inv[idx]->clone());
		idx++;
	}
	return (0);
}
