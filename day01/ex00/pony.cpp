/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:09 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:25:37 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

Pony::Pony()
{
}

Pony::~Pony()
{
	std::cout << "Pony " << this->_name << " died :(" << std::endl;
}

void    Pony::setPony(std::string Pony)
{
	std::string	param;

	std::cout << "Type " << Pony << " Pony name" << std::endl;
	std::cin >> this->_name;
	std::cout << "Type Pony max speed in km/h" << std::endl;
	std::cin >> param;
	this->_maxSpeed = std::atoi(param.c_str());
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

