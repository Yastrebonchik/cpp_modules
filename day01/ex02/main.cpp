/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:58:36 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:25:49 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>

int		main()
{
	Zombie		*zptr;
	Zombie		first("Hunter", "Tony");
	ZombieEvent	event;

	first.announce();
	event.setZombieType("Tank");
	zptr = event.newZombie("Zic");
	zptr->announce();
	delete zptr;
	event.setZombieType("Smoker");
	event.randomChump();
	return (0);
}