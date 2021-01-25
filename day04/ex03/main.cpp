/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:24:03 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 01:41:08 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int		main()
{
	IMateriaSource* src = new MateriaSource();
 
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	std::cout << "------------------------------------" << std::endl;
	std::cout << "Additional tests" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	MateriaSource	source = MateriaSource();
	Ice				imat = Ice();
	Cure			cmat = Cure();
	Character		sam = Character("Sam");
	Character		mule = Character("Mule");

	source.learnMateria(&imat);
	source.learnMateria(&cmat);
	source.learnMateria(&imat);
	source.learnMateria(&cmat);

	sam.equip(source.createMateria("ice"));
	sam.equip(source.createMateria("cure"));
	sam.equip(nullptr);
	sam.equip(source.createMateria("ice"));
	sam.equip(source.createMateria("cure"));

	int i;

	std::cout << "------------------------------------" << std::endl;
	std::cout << "Using materia" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	i = 0;
	while (i < 4)
	{
		sam.use(i, mule);
		i++;
	}
	sam.unequip(10);
	sam.unequip(3);
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Using materia after unequips" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	i = 0;
	while (i < 4)
	{
		sam.use(i, mule);
		i++;
	}
	std::cout << "------------------------------------" << std::endl;
	std::cout << "MateriaSource copy constructor" << std::endl;
	MateriaSource	testsource = MateriaSource(source);
	AMateria*		testmateria;
	i = 0;
	while (i < 4)
	{
		testmateria = testsource.createMateria("ice");
		std::cout << "I'm here" << std::endl;
		std::cout << testmateria << std::endl;
		delete testmateria;
		i++;
	}
	std::cout << "------------------------------------" << std::endl;
	//check for leaks
	//Вохможно leearn materia нужно поменять на копирование, а не присваивание,
	//но жопой чую из-за этого будут лики в обязательном мейне
	//Сделать тесты для оператора присваивания материи
	return (0);
}