/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:28:44 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 18:05:53 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_maxHitPoints = 100;
	this->_maxEnergyPoints = 50;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 5;
	std::cout << "This time I'll be awesome, I promise!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "This time I'll be awesome, I promise!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " : My servos... are seizing..." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target;
	std::cout  << " at range, causing " <<  this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " <<  this->_meleeAttackDamage << " points of damage!" << std::endl;
}


void	ScavTrap::challengeNewcomer()
{
	int rand;
	std::string	quotes[5] = {"This Is No Time for Lazy!",
	"EXPLOOOOOSIONS!", "...To Pay the Bills",
	"JEEEEEKINSSSSSS!!!*", "Haters Gonna Hate"};
	std::string	challenges[5] = {"Revive a co-op partner.", "Kill enemies with Mirv grenades.",
	"Kill enemies while using your Action Skill.", "Find and eliminate Jimmy Jenkins.",
	"Win duels."};

	rand = std::rand() % 5;
	std::cout << quotes[rand] << " : " << challenges[rand] << std::endl;
}