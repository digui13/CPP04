/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2022/05/26 14:42:39 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"

Character::Character(void)
{
	int	idx;

	_name = "Default Character";
	idx = 0;
	while (idx < 4)
	{
		_inv[idx] = NULL;
		idx++;
	}
}

Character::Character(const string &name)
{
	int	idx;

	_name = name;
	idx = 0;
	while (idx < 4)
	{
		_inv[idx] = NULL;
		idx++;
	}
}

Character::Character(const Character &obj)
{
	int	idx;

	_name = obj.getName();
	idx = 0;
	while (idx < 4)
	{
		_inv[idx] = obj._inv[idx];
		idx++;
	}
}

Character::~Character(void)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		if (_inv[idx] != NULL)
			delete (_inv[idx]);
		idx++;
	}
}

Character& Character::operator=(const Character &obj)
{
	int	idx;

	idx = 0;
	_name = obj.getName();
	delete[] (*_inv);
	while (idx < 4)
	{
		_inv[idx] = obj._inv[idx];
		idx++;
	}
	return (*this);
}

string const& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* obj)
{
	int	idx;

	idx = 0;
	while (idx < 4)
	{
		if (_inv[idx] == NULL)
		{
			_inv[idx] = obj;
			break;
		}
		idx++;
	}
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx <= 3)
	{
		AMateria *materia = _inv[idx];
		if (materia == NULL)
			return;
		materia->drop();
		_inv[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx <= 3)
		if (_inv[idx] != NULL)
			_inv[idx]->use(target);
}
