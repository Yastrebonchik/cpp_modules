/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:14:06 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 00:14:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	this->_name = "Plasma Rifle";
	this->_APCost = 5;
	this->_damage = 21;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) : AWeapon(src)
{
	this->_name = src.getName();
	this->_APCost = src.getAPCost();
	this->_damage = src.getDamage();
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle& 	PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_APCost = rhs._APCost;
		this->_damage = rhs._damage;
	}
	return *this;
}

void			PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
