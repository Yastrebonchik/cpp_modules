/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:43:28 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 21:08:31 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
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
	std::cout << "Aaaaand... OPEN!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "Aaaaand... OPEN!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "I can see... the code" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout  << " at range, causing " <<  this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " <<  this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	quotes[5] = {"I'm pulling tricks outta my hat!",
	"Resequencing combat protocols!", "Loading combat packages!",
	"It's happening... it's happening!", "Recompiling my combat code!"};

	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout << quotes[std::rand() % 5] << " : ";
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " at melee, causing " <<  this->_meleeAttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Can't do it, i'm out of energy..." << std::endl;
}