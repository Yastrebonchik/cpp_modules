/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:54:23 by alexander         #+#    #+#             */
/*   Updated: 2021/01/21 19:40:34 by kcedra           ###   ########.fr       */
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
				std::cout << "Can't add more contacts" << std::endl;
			else
				phonebook[contactQuan].addContact();
		}
		else if (command.compare("SEARCH") == 0)
			contact::getContact(phonebook);
	}
	return (0);
}
