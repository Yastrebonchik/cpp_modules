/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 00:55:07 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 19:39:46 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NingaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_maxHitPoints = 60;
	this->_maxEnergyPoints = 120;
	this->_hitPoints = 60;
	this->_energyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "KYYYYYYYYYYYYYYYYYYYYAAAAAA!!!!!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src)
{
	std::cout << "KYYYYYYYYYYYYYYYYYYYYAAAAAA!!!!!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "I'm going back to the shadows ..." << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
		std::cout << "Ninja-TP " << this->_name << " attacks " << target;
		std::cout  << " at range, causing " <<  this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	if (target.compare(this->_name) == 0)
		std::cout << "Harakiri" << std::endl;
	else
	{
		std::cout << "Ninja-TP " << this->_name << " attacks " << target;
		std::cout << " at melee, causing " <<  this->_meleeAttackDamage << " points of damage!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(ClapTrap& rhs)
{
	this->meleeAttack(rhs.getName());
	rhs.takeDamage(this->_meleeAttackDamage);
}

void	NinjaTrap::ninjaShoebox(FragTrap& rhs)
{
	this->meleeAttack(rhs.getName());
	rhs.takeDamage(this->_meleeAttackDamage);
}

void	NinjaTrap::ninjaShoebox(ScavTrap& rhs)
{
	this->meleeAttack(rhs.getName());
	rhs.takeDamage(this->_meleeAttackDamage);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap& rhs)
{
	this->meleeAttack(rhs.getName());
	rhs.takeDamage(this->_meleeAttackDamage);
}