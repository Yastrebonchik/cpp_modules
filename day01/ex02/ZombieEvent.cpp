/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:58:13 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 13:58:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*zptr;

	zptr = new Zombie(this->_type, name);
	return (zptr);
}

void	ZombieEvent::randomChump()
{
	int	rand;
	std::string const names[6] = {"Marco", "Bertholdt", "Rainer", "Eren", "Falco", "Armin"};

	std::srand(time(0));
	rand = std::rand() % 6;
	Zombie	newzombie = Zombie(this->_type, names[rand % 6]);
	newzombie.announce();
}