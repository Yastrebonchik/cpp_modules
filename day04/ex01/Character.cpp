/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:45:02 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 19:50:10 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(NULL)
{
}

Character::Character(const Character &src)
{
	*this = src;
}

Character::~Character()
{
}

Character&			Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_weapon = rhs._weapon;
	}
	return (*this);
}

std::string	const	Character::getName(void) const
{
	return (this->_name);
}

int					Character::getAP(void) const
{
	return (this->_AP);
}

AWeapon*			Character::getWeapon() const
{
	return (this->_weapon);
}

void				Character::recoverAP()
{
	int	AP;

	AP = this->_AP + 10;
	if (AP > 40)
		AP = 40;
	this->_AP = AP;
}

void 				Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void				Character::attack(Enemy* enemy)
{
	if (this->getWeapon() != NULL && enemy != NULL && this->_AP > this->getWeapon()->getAPCost())
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->getWeapon()->getName() << std::endl;
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
