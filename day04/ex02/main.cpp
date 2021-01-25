/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:55:11 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 20:17:39 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "AssualtTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int 	main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	int i;

	std::cout << "------------------------------------" << std::endl;
	std::cout << "Additional tests" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	Squad msquad = Squad();
	Squad testsquad = Squad();

	i = 0;
	while (i < 6)
	{
		msquad.push(new TacticalMarine);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		testsquad.push(new AssaultTerminator);
		i++;
	}
	i = 0;
	std::cout << "------------------------------------" << std::endl;
	while (i < testsquad.getCount())
	{
		std::cout << "Squad " << i << " soldier pointer is " << testsquad.getUnit(i) << std::endl;
		i++;
	}
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Copy constructor" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	Squad	tsquad(testsquad);
	std::cout << "------------------------------------" << std::endl;
	i = 0;
	while (i < tsquad.getCount())
	{
		std::cout << "Squad " << i << " soldier pointer is " << tsquad.getUnit(i) << std::endl;
		i++;
	}
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Assignment operator" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	testsquad = msquad;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Testsquad pointers" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	i = 0;
	while (i < testsquad.getCount())
	{
		std::cout << "Squad " << i << " soldier pointer is " << testsquad.getUnit(i) << std::endl;
		i++;
	}
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Msquad pointers" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	i = 0;
	while (i < msquad.getCount())
	{
		std::cout << "Squad " << i << " soldier pointer is " << msquad.getUnit(i) << std::endl;
		i++;
	}
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Invalid push" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	ISpaceMarine* john = new AssaultTerminator;
	std::cout << "Unit quantity = " << msquad.getCount() << std::endl;
	msquad.push(john);
	std::cout << "Unit quantity = " << msquad.getCount() << std::endl;
	msquad.push(john);
	std::cout << "Unit quantity = " << msquad.getCount() << std::endl;
	msquad.push(nullptr);
	std::cout << "Unit quantity = " << msquad.getCount() << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Invalid getunit" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	ISpaceMarine*	getmarine;
	getmarine = msquad.getUnit(1);
	std::cout << "Squad " << i << " soldier pointer is " << getmarine << std::endl;
	getmarine = msquad.getUnit(-15);
	std::cout << "Squad " << i << " soldier pointer is " << getmarine << std::endl;
	std::cout << "------------------------------------" << std::endl;

	return (0);
}