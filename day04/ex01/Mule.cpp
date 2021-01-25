/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mule.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:03:08 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 15:01:32 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mule.hpp"

Mule::Mule() : Enemy(120, "Mule")
{
	std::cout << "* BUZZER NOICES *" << std::endl;
	this->_hitPoints = 120;
	this->_type = "Mule";
}

Mule::Mule(const Mule &src) : Enemy(src)
{
	std::cout << "* BUZZER NOICES *" << std::endl;
	*this = src;
}

Mule::~Mule()
{
	std::cout << "I'm returning to the void..." << std::endl;
}

Mule&	Mule::operator=(const Mule &rhs)
{
	this->_hitPoints = rhs._hitPoints;
	this->_type = rhs._type;
	return (*this);
}
