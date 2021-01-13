/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:09 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 00:19:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

Pony::Pony()
{
}

Pony::~Pony()
{
}

void    Pony::setPony(std::string Pony)
{
	std::cout << "Type " << Pony << " Pony height" << std::endl;
	std::cin >> this->_height;
	std::cout << "Type Pony age" << std::endl;
	std::cin >> this->_age;
	std::cout << "Type Pony max speed in km/h" << std::endl;
	std::cin >> this->_maxSpeed;
	std::cout << "Type Pony fur colour" << std::endl;
	std::cin >> this->_furColour;
}

void    Pony::ponyEat()
{
	std::cout << "< Grass plucking sounds >" << std::endl;
}

void	Pony::ponySleep()
{
	std::cout << "Pony is sleeping Zzzzzzzzz......" << std::endl;
}

void	Pony::ponyCompete(Pony *competitor)
{
	if (this->_maxSpeed > competitor->_maxSpeed)
		std::cout << "Our Pony Won!!!!" << std::endl;
	else if (this->_maxSpeed < competitor->_maxSpeed)
		std::cout << "Our Pony lose :(" << std::endl;
	else
		std::cout << "It's a draw!" << std::endl;
}

Pony    ponyOnTheStack()
{
    Pony newpony = Pony();
    return (newpony);
}

Pony    *ponyOnTheHeap()
{
    Pony *ponyptr = new Pony();
    return (ponyptr);
}

