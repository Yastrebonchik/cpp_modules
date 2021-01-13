/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 02:52:25 by marvin            #+#    #+#             */
/*   Updated: 2021/01/13 02:52:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main()
{
	int n;

	std::cout << "Enter number of zombies you want to create" << std::endl;
	std::cin >> n;
	ZombieHorde	newHorde(n);
	newHorde.announce();
	return (0);
}