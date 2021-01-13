/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:06:58 by marvin            #+#    #+#             */
/*   Updated: 2021/01/13 23:24:16 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	//std::cout << "Weapon " << _type << " created" << std::endl;
}

Weapon::~Weapon()
{
	//std::cout << "Weapon destroyed" << std::endl;
}

std::string &	Weapon::getType()
{
	std::string &ref = _type;
	return (ref);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}