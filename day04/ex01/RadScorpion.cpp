/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:29:21 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 11:29:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	this->_hitPoints = 80;
	this->_type = "RadScorpion";
}

RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(src)
{
	std::cout << "* click click click *" << std::endl;
	this->_hitPoints = src.getHP();
	this->_type = "RadScorpion";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion &rhs)
{
	if (this != &rhs)
		Enemy::operator=(rhs);
	return (*this);
}

