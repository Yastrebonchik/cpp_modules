/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 01:33:13 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 01:33:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap summoned!" << std::endl;
	this->_level = 1;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
}

SuperTrap::SuperTrap(const SuperTrap &src) : ClapTrap(src), FragTrap(src), NinjaTrap(src)
{
	std::cout << "SuperTrap summoned!" << std::endl;
	this->_name = src._name;
	this->_maxHitPoints = src._maxHitPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_level = src._level;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangedAttackDamage = src._rangedAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destroyed!" << std::endl;
}

SuperTrap&		SuperTrap::operator=(const SuperTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void			SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void			SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}