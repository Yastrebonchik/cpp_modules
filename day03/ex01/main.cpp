/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:53:05 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 18:02:34 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	std::srand(time(0));
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "Fragtrap tests" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;

	FragTrap	fragtrap1("Fragtrap 1");
	FragTrap	ubertrap1("Ubertrap 1");
	FragTrap	fragtrap2(fragtrap1);

	fragtrap1.meleeAttack("Jack");
	fragtrap1.rangedAttack("Jack");
	std::cout << "Fragtrap 1 hitpoints = " << fragtrap1.getHP() << std::endl;
	fragtrap1.takeDamage(100);
	std::cout << "Fragtrap 1 hitpoints = " << fragtrap1.getHP() << std::endl;
	fragtrap1.beRepaired(150);
	std::cout << "Fragtrap 1 hitpoints = " << fragtrap1.getHP() << std::endl;
	fragtrap1.takeDamage(200);
	std::cout << "Fragtrap 1 hitpoints = " << fragtrap1.getHP() << std::endl;
	std::cout << "Fragtrap 1 energy points = " << fragtrap1.getEnergyPoints() << std::endl;
	fragtrap1.vaulthunter_dot_exe("Zed");
	std::cout << "Fragtrap 1 energy points = " << fragtrap1.getEnergyPoints() << std::endl;

	std::cout << "---------------------------------------------------------" << std::endl;

	std::cout << "Ubertrap energy points = " << ubertrap1.getEnergyPoints() << std::endl;
	ubertrap1 = fragtrap1;

	std::cout << "---------------------------------------------------------" << std::endl;

	std::cout << "Ubertrap energy points = " << ubertrap1.getEnergyPoints() << std::endl;
	ubertrap1.vaulthunter_dot_exe("Zed");
	std::cout << "Ubertrap energy points = " << ubertrap1.getEnergyPoints() << std::endl;
	ubertrap1.vaulthunter_dot_exe("Jack");
	std::cout << "Ubertrap energy points = " << ubertrap1.getEnergyPoints() << std::endl;
	ubertrap1.vaulthunter_dot_exe("Zed");
	std::cout << "Ubertrap energy points = " << ubertrap1.getEnergyPoints() << std::endl;
	ubertrap1.vaulthunter_dot_exe("Jack");

	std::cout << "---------------------------------------------------------" << std::endl;

	std::cout << "Fragtrap 2 hitpoints = " << fragtrap2.getHP() << std::endl;
	fragtrap2.takeDamage(100);
	std::cout << "Fragtrap 2 hitpoints = " << fragtrap2.getHP() << std::endl;
	fragtrap2.beRepaired(150);
	std::cout << "Fragtrap 2 hitpoints = " << fragtrap2.getHP() << std::endl;
	fragtrap2.takeDamage(200);
	std::cout << "Fragtrap 2 hitpoints = " << fragtrap2.getHP() << std::endl;
	std::cout << "Fragtrap 2 energy points = " << fragtrap2.getEnergyPoints() << std::endl;
	fragtrap2.vaulthunter_dot_exe("Zed");
	std::cout << "Fragtrap 2 energy points = " << fragtrap2.getEnergyPoints() << std::endl;

	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "Scavtrap tests" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	
	ScavTrap	newTrap("Newtrap");
	ScavTrap	testscav("Testscav");
	ScavTrap	newTrap2(newTrap);

	newTrap.meleeAttack("Jack");
	newTrap.rangedAttack("Jack");
	newTrap.takeDamage(100);
	std::cout << "NewTrap hitpoints = " << newTrap.getHP() << std::endl;
	newTrap.beRepaired(150);
	std::cout << "NewTrap hitpoints = " << newTrap.getHP() << std::endl;
	newTrap.takeDamage(200);
	std::cout << "NewTrap hitpoints = " << newTrap.getHP() << std::endl;

	std::cout << "---------------------------------------------------------" << std::endl;

	std::cout << "Testscav hitpoints = " << testscav.getHP() << std::endl;
	testscav = newTrap;
	
	std::cout << "---------------------------------------------------------" << std::endl;

	std::cout << "Testscav hitpoints = " << testscav.getHP() << std::endl;
	testscav.beRepaired(150);
	std::cout << "Testscav hitpoints = " << testscav.getHP() << std::endl;
	testscav.takeDamage(100);
	std::cout << "Testscav hitpoints = " << testscav.getHP() << std::endl;
	testscav.beRepaired(150);
	std::cout << "Testscav hitpoints = " << testscav.getHP() << std::endl;
	testscav.takeDamage(200);
	std::cout << "Testscav hitpoints = " << testscav.getHP() << std::endl;

	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();

	std::cout << "---------------------------------------------------------" << std::endl;

	std::cout << "Newtrap 2 hitpoints = " << newTrap2.getHP() << std::endl;
	newTrap2.takeDamage(100);
	std::cout << "Newtrap 2 hitpoints = " << newTrap2.getHP() << std::endl;
	newTrap2.beRepaired(150);
	std::cout << "Newtrap 2 hitpoints = " << newTrap2.getHP() << std::endl;
	newTrap2.takeDamage(200);
	std::cout << "Newtrap 2 hitpoints = " << newTrap2.getHP() << std::endl;

	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "Destructors calls" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;

	return (0);
}