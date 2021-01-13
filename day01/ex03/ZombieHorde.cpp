/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:34:03 by marvin            #+#    #+#             */
/*   Updated: 2021/01/12 23:34:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int 		i = 0;
	std::string	name;
	std::string	type;
	std::string const names[6] = {"Marco", "Bertholdt", "Rainer", "Eren", "Falco", "Armin"};
	std::string const types[6] = {"Ordinary", "Good", "Bad", "Titan", "Colossal", "Warhammer titan"};

	std::srand(time(0));
	this->_zombieQuan = n;
	this->_zHordePtr = new Zombie[n];
	while (i < n)
	{
		name = names[std::rand() % 6];
		type = types[std::rand() % 6];
		this->_zHordePtr[i].setZombie(type, name);
		i++;
	}
}

void	ZombieHorde::announce()
{
	int	i = 0;

	while (i < this->_zombieQuan)
	{
		this->_zHordePtr[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] (this->_zHordePtr);
}