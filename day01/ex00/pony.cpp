/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:09 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 00:19:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

pony::pony()
{
}

pony::~pony()
{
}

void    pony::setPony(std::string pony)
{
	std::cout << "Type " << pony << " pony height" << std::endl;
	std::cin >> this->_height;
	std::cout << "Type pony age" << std::endl;
	std::cin >> this->_age;
	std::cout << "Type pony max speed in km/h" << std::endl;
	std::cin >> this->_maxSpeed;
	std::cout << "Type pony fur colour" << std::endl;
	std::cin >> this->_furColour;
}

void    pony::ponyEat()
{
	std::cout << "< Grass plucking sounds >" << std::endl;
}

void	pony::ponySleep()
{
	std::cout << "Pony is sleeping Zzzzzzzzz......" << std::endl;
}

void	pony::ponyCompete(pony *competitor)
{
	if (this->_maxSpeed > competitor->_maxSpeed)
		std::cout << "Our pony Won!!!!" << std::endl;
	else if (this->_maxSpeed < competitor->_maxSpeed)
		std::cout << "Our pony lose :(" << std::endl;
	else
		std::cout << "It's a draw!" << std::endl;
}

pony    ponyOnTheStack()
{
    pony newpony = pony();
    return (newpony);
}

pony    *ponyOnTheHeap()
{
    pony *ponyptr = new pony();
    return (ponyptr);
}

