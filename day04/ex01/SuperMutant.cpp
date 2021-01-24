/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:10:30 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 18:36:41 by kcedra           ###   ########.fr       */
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
	*this = src;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}