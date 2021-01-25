/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:23:42 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 22:15:20 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	int i;

	i = 0;
	while(i < 4)
		_inventory[i++] = nullptr;
}

Character::Character(const Character &src) : _name(src.getName())
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
		this->_inventory[i++] = nullptr;
	}
	i = 0;
	while (i < 4)
		this->equip(src._inventory[i]->clone());
}

Character::~Character()
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
		i++;
	}
}

Character&			Character::operator=(const Character &rhs)
{
	int i;

	if (this != &rhs)
	{
		i = 0;
		while(i < 4)
		{
			if (this->_inventory[i] != nullptr)
				delete this->_inventory[i];
			this->_inventory[i++] = nullptr;
		}
		i = 0;
		this->_name = rhs._name;
		while(i < 4)
			this->equip(rhs._inventory[i++]->clone());
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void 				Character::equip(AMateria* m)
{
	int i;

	i = 0;
	if (m != nullptr)
	{
		while(i < 4)
		{
			if (this->_inventory[i] == nullptr)
			{
				this->_inventory[i] = m;
				break ;
			}
			i++;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = nullptr;
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <=3 && this->_inventory[idx] != nullptr)
	{
		this->_inventory[idx]->use(target);
		this->_inventory[idx]->AMateria::use(target);
	}
}