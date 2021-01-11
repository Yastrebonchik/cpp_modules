/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:54:23 by alexander         #+#    #+#             */
/*   Updated: 2021/01/11 17:01:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int		main()
{
	int		contactQuan;
	contact	phonebook[8];
	std::string	command;

	contactQuan = 0;
	while (1)
	{
		std::cout << "Choose a command" << std::endl;
		std::cin >> command;
		if (command.compare("EXIT") == 0)
			break ;
		else if (command.compare("ADD") == 0)
		{
			contactQuan = contact::getContactQuan();
			if (contactQuan >= 8)
				std::cout << "Can't increment more, bitch" << std::endl;
			else
				phonebook[contactQuan].addContact();
		}
		else if (command.compare("SEARCH") == 0)
		{
			contact::getContact(phonebook);
		}
	}
	return (0);
}
