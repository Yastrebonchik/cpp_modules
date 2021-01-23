/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 01:33:13 by marvin            #+#    #+#             */
/*   Updated: 2021/01/23 19:36:21 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << "SuperTrap summoned!" << std::endl;
	this->_level = 1;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << FragTrap::_hitPoints << std::endl;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = FragTrap::_armorDamageReduction;
}

SuperTrap::SuperTrap(const SuperTrap &src) : ClapTrap(src), NinjaTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "SuperTrap summoned!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destroyed!" << std::endl;
}

SuperTrap&		SuperTrap::operator=(const SuperTrap &rhs)
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
	this->FragTrap::rangedAttack(target);
}

void			SuperTrap::meleeAttack(std::string const & target)
{
	this->NinjaTrap::meleeAttack(target);
}