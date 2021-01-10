/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:54:23 by alexander         #+#    #+#             */
/*   Updated: 2021/01/09 20:50:06 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int		main()
{
	contact	phonebook[8];
	std::string	command;

	while (1)
	{
		std::cout << "Choose a command" << std::endl;
		std::cin >> command;
		if (command.compare("EXIT") == 0)
			break ;
		else if (command.compare("ADD") == 0)
		{
			if (contact::getContactQuan() >= 8)
				std::cout << "Can't increment more, bitch" << std::endl;
			else
				contact::incContactQuan();
		}
		else
			std::cout << "Choose another command" << std::endl;
		
		std::cout << "Number of your contacts is " << contact::getContactQuan() << std::endl;
	}
	return (0);
}
