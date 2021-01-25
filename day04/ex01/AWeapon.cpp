/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 23:55:44 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 14:59:58 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _APCost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &src)
{
	*this = src;
}

AWeapon::~AWeapon()
{
}

std::string	const	AWeapon::getName(void) const
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
	this->_name = rhs._name;
	this->_APCost = rhs._APCost;
	this->_damage = rhs._damage;
	return (*this);
}
