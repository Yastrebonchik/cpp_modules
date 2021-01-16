/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:06:28 by marvin            #+#    #+#             */
/*   Updated: 2021/01/16 17:06:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "ClapTrap summoned!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_name = src._name;
	this->_maxHitPoints = src._maxHitPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_level = src._level;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangedAttackDamage = src._rangedAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
	std::cout << "ClapTrap summoned!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "I can see through time..." << std::endl;
}

ClapTrap&		ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

void			ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CLAP-TP " << this->_name << " attacks " << target;
	std::cout  << " at range, causing " <<  this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CLAP-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " <<  this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	int	hp;
	int	damage;

	damage = amount - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
	hp = this->_hitPoints - damage;
	if (hp < 0)
		hp = 0;
	this->_hitPoints = hp;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	int hp;

	std::cout << "Good as new, I think. Am I leaking" << std::endl;
	hp = this->_hitPoints + (int)amount;
	if (hp > this->_maxHitPoints)
		hp = this->_maxHitPoints;
	this->_hitPoints = hp;
}