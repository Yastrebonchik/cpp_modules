/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:44 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 00:19:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

int     main()
{
    pony ourpony = ponyOnTheStack();
	pony *competior = ponyOnTheHeap();

	ourpony.setPony("your");
	competior->setPony("competitor");
	ourpony.ponyCompete(competior);
	ourpony.ponyEat();
	competior->ponyEat();
	ourpony.ponySleep();
	competior->ponySleep();
	delete competior;
	return (0);
}