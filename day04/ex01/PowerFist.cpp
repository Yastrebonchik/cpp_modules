/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:24:26 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 15:01:53 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	this->_name = "Power Fist";
	this->_APCost = 8;
	this->_damage = 50;
}

PowerFist::PowerFist(const PowerFist &src) : AWeapon(src)
{
	*this = src;
}

PowerFist::~PowerFist()
{
}

PowerFist& 	PowerFist::operator=(const PowerFist &rhs)
{
	this->_name = rhs.getName();
	this->_APCost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}

void			PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
