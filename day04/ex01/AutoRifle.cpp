/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AutoRifle.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:15:19 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 14:59:48 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AutoRifle.hpp"

AutoRifle::AutoRifle() : AWeapon("Auto Rifle", 6, 30)
{
}

AutoRifle::AutoRifle(const AutoRifle &src) : AWeapon(src)
{
	*this = src;
}

AutoRifle::~AutoRifle()
{
}

AutoRifle& 	AutoRifle::operator=(const AutoRifle &rhs)
{
	this->_name = rhs._name;
	this->_APCost = rhs._APCost;
	this->_damage = rhs._damage;
	return (*this);
}

void			AutoRifle::attack(void) const
{
	std::cout << "* tra ta ta ta ta *" << std::endl;
}

