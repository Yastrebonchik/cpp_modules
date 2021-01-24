/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:42:35 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 18:16:54 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Rancher.hpp"

int		main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "-------------------------------------" << std::endl;
	Sorcerer	mage("Urie", "magister");
 	Victim		victim("Charls");

 	std::cout << mage;
 	std::cout << victim;

	Rancher		john("John");

	std::cout << john;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Socrerer polymorphs victim" << std::endl;
	
	mage.polymorph(john);

	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Victim is being polymorphed without socrerer" << std::endl;
	
	victim.getPolymorphed();

	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Destructors calls" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	return (0);
}