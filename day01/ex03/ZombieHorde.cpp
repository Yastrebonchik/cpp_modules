/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:34:03 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:26:15 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int 		i = 0;
	std::string	name;
	std::string	type;
	std::string const names[6] = {"Foster", "Garold", "Steve", "John", "Falco", "Armin"};
	std::string const types[6] = {"Tank", "Hunter", "Smoker", "Boomer", "Witch", "Charger"};

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