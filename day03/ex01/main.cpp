/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:53:05 by marvin            #+#    #+#             */
/*   Updated: 2021/01/16 15:53:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	FragTrap	claptrap1("Claptrap 1");
	FragTrap	ubertrap1("Ubertrap 1");
	FragTrap	claptrap2(claptrap1);

	std::srand(time(0));
	claptrap1.meleeAttack("Jack");
	claptrap1.rangedAttack("Jack");
	claptrap1.takeDamage(100);
	claptrap1.beRepaired(150);
	claptrap1.takeDamage(200);

	ubertrap1.meleeAttack("Zed");
	ubertrap1 = claptrap1;
	ubertrap1.vaulthunter_dot_exe("Zed");
	ubertrap1.vaulthunter_dot_exe("Jack");
	ubertrap1.vaulthunter_dot_exe("Zed");
	ubertrap1.vaulthunter_dot_exe("Jack");
	ubertrap1.vaulthunter_dot_exe("Zed");

	ScavTrap	newTrap("Newtrap");

	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();

	return (0);
}