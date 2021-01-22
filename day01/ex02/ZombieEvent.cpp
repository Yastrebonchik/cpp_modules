/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:58:13 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:25:57 by kcedra           ###   ########.fr       */
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
	std::string const names[6] = {"Foster", "Garold", "Steve", "John", "Falco", "Armin"};

	std::srand(time(0));
	rand = std::rand() % 6;
	Zombie	newzombie = Zombie(this->_type, names[rand % 6]);
	newzombie.announce();
}