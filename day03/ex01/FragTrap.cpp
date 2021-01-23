/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:43:28 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 15:23:53 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(FragTrap::_maxHitPoints), _energyPoints(FragTrap::_maxEnergyPoints)
{
	std::cout << "Aaaaand... OPEN!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints)
{
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

void	FragTrap::takeDamage(unsigned int amount)
{
	int	hp;
	int	damage;

	damage = amount - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "FR4G-TP " << this->_name << " : ";
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
	hp = this->_hitPoints - damage;
	if (hp < 0)
		hp = 0;
	this->_hitPoints = hp;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int hp;

	std::cout << "FR4G-TP " << this->_name << " : ";
	std::cout << "Good as new, I think. Am I leaking?" << std::endl;
	hp = this->_hitPoints + (int)amount;
	if (hp > this->_maxHitPoints)
		hp = this->_maxHitPoints;
	this->_hitPoints = hp;
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
		std::cout << " at melee, causing " << std::rand() % this->_meleeAttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Can't do it, i'm out of energy..." << std::endl;
}

int		FragTrap::getHP()
{
	return (this->_hitPoints);
}

int		FragTrap::getEnergyPoints()
{
	return (this->_energyPoints);
}