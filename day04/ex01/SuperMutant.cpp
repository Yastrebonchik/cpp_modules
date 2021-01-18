/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:10:30 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 11:10:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_hitPoints = 170;
	this->_type = "Super Mutant";
}

SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_hitPoints = src.getHP();
	this->_type = "Super Mutant";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant &rhs)
{
	if (this != &rhs)
		Enemy::operator=(rhs);
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}