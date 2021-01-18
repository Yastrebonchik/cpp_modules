/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 23:55:44 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 23:55:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _APCost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &src) : _name(src.getName()), _APCost(src.getAPCost()), _damage(src.getDamage()) 
{
}

AWeapon::~AWeapon()
{
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int			AWeapon::getAPCost() const
{
	return (this->_APCost);
}

int			AWeapon::getDamage() const
{
	return (this->_damage);
}

AWeapon& 	AWeapon::operator=(const AWeapon &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_APCost = rhs._APCost;
		this->_damage = rhs._damage;
	}
	return *this;
}
