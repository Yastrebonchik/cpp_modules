/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:44 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:25:33 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

int     main()
{
	Pony *competior = ponyOnTheHeap();
    Pony ourpony = ponyOnTheStack();

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