/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:28:44 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 18:02:38 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(ScavTrap::_maxHitPoints), _energyPoints(ScavTrap::_maxEnergyPoints)
{
	std::cout << "This time I'll be awesome, I promise!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints)
{
	std::cout << "This time I'll be awesome, I promise!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "My servos... are seizing..." << std::endl;
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	int	hp;
	int	damage;

	damage = amount - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "SC4V-TP " << this->_name << " : ";
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
	hp = this->_hitPoints - damage;
	if (hp < 0)
		hp = 0;
	this->_hitPoints = hp;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int hp;

	std::cout << "SC4V-TP " << this->_name << " : ";
	std::cout << "Good as new, I think. Am I leaking" << std::endl;
	hp = this->_hitPoints + (int)amount;
	if (hp > this->_maxHitPoints)
		hp = this->_maxHitPoints;
	this->_hitPoints = hp;
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

int		ScavTrap::getHP()
{
	return (this->_hitPoints);	
}