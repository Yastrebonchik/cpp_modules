/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:15:33 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 20:36:34 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Mule.hpp"
#include "AutoRifle.hpp"

int		main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "-----------------------------------" << std::endl;

	me->equip(NULL);
	std::cout << *me;
	Enemy*	mutant = new SuperMutant();

	me->attack(mutant);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(mutant);
	std::cout << "Mutant hp = " << mutant->getHP() << std::endl;
	std::cout << *me;
	me->attack(mutant);
	std::cout << "Mutant hp = " << mutant->getHP() << std::endl;
	std::cout << *me;
	me->attack(mutant);
	std::cout << "Mutant hp = " << mutant->getHP() << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(mutant);
	std::cout << "Mutant hp = " << mutant->getHP() << std::endl;
	me->attack(mutant);

	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Additional weapon and enemy tests" << std::endl;
	std::cout << "-----------------------------------" << std::endl;

	Enemy	*mule = new Mule();
	AWeapon	*autorifle = new AutoRifle();

	me->recoverAP();
	me->recoverAP();
	me->equip(autorifle);
	std::cout << *me;
	me->attack(mule);
	std::cout << "Mule hp = " << mule->getHP() << std::endl;
	std::cout << *me;
	me->attack(mule);
	std::cout << "Mule hp = " << mule->getHP() << std::endl;
	std::cout << *me;


	//To check assignment operator
	Enemy	*copy = new Mule();

	std::cout << "Mule hp = " << copy->getHP() << std::endl;
	copy = mule;
	std::cout << "Mule hp = " << copy->getHP() << std::endl;

	me->attack(mule);
	std::cout << "Mule hp = " << mule->getHP() << std::endl;
	std::cout << *me;
	me->attack(mule);
	std::cout << "Mule hp = " << mule->getHP() << std::endl;
	std::cout << *me;
	
	delete me;
	delete pr;
	delete pf;
	delete autorifle;
	//delete copy;
	return (0);
}