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

#include "ClapTrap.hpp" 
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NingaTrap.hpp"

int		main()
{
	FragTrap	fragtrap1("Claptrap 1");
	FragTrap	ubertrap1("Ubertrap 1");
	FragTrap	fragtrap2(fragtrap1);

	std::srand(time(0));
	fragtrap1.meleeAttack("Jack");
	fragtrap1.rangedAttack("Jack");
	fragtrap1.takeDamage(100);
	fragtrap1.beRepaired(150);

	ubertrap1.meleeAttack("Zed");
	ubertrap1 = fragtrap1;
	ubertrap1.vaulthunter_dot_exe("Zed");
	ubertrap1.vaulthunter_dot_exe("Jack");

	ScavTrap	newTrap("Newtrap");

	newTrap.challengeNewcomer();
	newTrap.challengeNewcomer();

	ClapTrap	clap("Clap");
	NinjaTrap	ninja("Ninja");

	ninja.ninjaShoebox(fragtrap1);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(newTrap);
	ninja.ninjaShoebox(ninja);
	return (0);
}