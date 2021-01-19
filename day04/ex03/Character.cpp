/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:23:42 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 01:23:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	int i;

	i = 0;
	while(i < 4)
	{
		_inventory[i] = nullptr;
		i++;
	}
}

Character::Character(const Character &src) : _name(src.getName())
{
	int i;

	i = 0;
	while (i < 4)
		this->_inventory[i] = src._inventory[i++];
}

Character::~Character()
{
	int i;

	delete this->_inventory;
}

Character&			Character::operator=(const Character &rhs)
{
	int i;

	if (this != &rhs)
	{
		this->_name = rhs._name;
		while(i < 4)
			this->_inventory[i] = rhs._inventory[i++];
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
	while(i < 4)
	{
		if (this->_inventory[i] != nullptr);
			this->_inventory[i] = m;
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