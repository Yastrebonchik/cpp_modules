/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:29:21 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 19:19:53 by kcedra           ###   ########.fr       */
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
	*this = src;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

