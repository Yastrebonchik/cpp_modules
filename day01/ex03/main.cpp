/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 02:52:25 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:26:05 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main()
{
	std::string	number;

	std::srand(time(0));
	std::cout << "Enter number of zombies you want to create" << std::endl;
	std::cin >> number;
	ZombieHorde	newHorde(std::atoi(number.c_str()));
	newHorde.announce();
	return (0);
}