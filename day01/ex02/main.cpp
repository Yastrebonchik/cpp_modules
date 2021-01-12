/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:58:36 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 13:58:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie		*zptr;
	Zombie		first("Colossal", "Grisha");
	ZombieEvent	event;

	first.announce();
	event.setZombieType("Titan");
	zptr = event.newZombie("Zic");
	zptr->announce();
	delete zptr;
	event.setZombieType("Random type");
	event.randomChump();
	return (0);
}