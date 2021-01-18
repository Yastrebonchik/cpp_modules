/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:45:02 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 11:45:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(NULL)
{
}

Character::Character(const Character &src) : _name(src.getName()), _AP(src.getAP()), _weapon(src.getWeapon())
{
}

Character::~Character()
{
}

std::string	Character::getName(void) const
{
	return (this->_name);
}

int			Character::getAP(void) const
{
	return (this->_AP);
}

AWeapon*	Character::getWeapon() const
{
	return (this->_weapon);
}

void		Character::recoverAP()
{
	int	AP;

	AP = this->_AP + 10;
	if (AP > 40)
		AP = 40;
	this->_AP = AP;
}

void 		Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void		Character::attack(Enemy* enemy)
{
	if (this->getWeapon() != NULL && enemy != NULL)
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a weapon " << this->getWeapon()->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_AP -= this->_weapon->getAPCost();
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

std::ostream &operator<<(std::ostream &out, const Character &src)
{
	if (src.getWeapon() == NULL)
		out << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	else
		out << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	return (out);
}
