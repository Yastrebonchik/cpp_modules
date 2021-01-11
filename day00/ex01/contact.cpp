/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:54:18 by alexander         #+#    #+#             */
/*   Updated: 2021/01/11 17:10:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

contact::contact()
{
}

contact::~contact()
{
}

int 		contact::getContactQuan(void)
{
	return (contact::_contactQuan);
}

void 		contact::addContact(void)
{
	this->_index = contact::getContactQuan();
	std::cout << "Type first name" << std::endl;
	std::cin >> this->_firstName;
	std::cout << "Type last name" << std::endl;
	std::cin >> this->_lastName;
	std::cout << "Type nickname" << std::endl;
	std::cin >> this->_nickName;
	std::cout << "Type login" << std::endl;
	std::cin >> this->_login;
	std::cout << "Type postal address" << std::endl;
	std::cin >> this->_postalAddress;
	std::cout << "Type email address" << std::endl;
	std::cin >> this->_emailAddress;
	std::cout << "Type phone number" << std::endl;
	std::cin >> this->_phoneNumber;
	std::cout << "Type birthday date" << std::endl;
	std::cin >> this->_birthdayDate;
	std::cout << "Type favorite meal" << std::endl;
	std::cin >> this->_favoriteMeal;
	std::cout << "Type underwear colour" << std::endl;
	std::cin >> this->_underwearColour;
	std::cout << "Type darkest secret" << std::endl;
	std::cin >> this->_darkesSecret;
	contact::_contactQuan++;
}

void	contact::printUserInfo(void)
{
	std::cout << "First name       : " << this->_firstName <<  std::endl;
	std::cout << "Last name        : " << this->_lastName <<  std::endl;
	std::cout << "Nickname         : " << this->_nickName <<  std::endl;
	std::cout << "Login            : " << this->_login <<  std::endl;
	std::cout << "Postal address   : " << this->_postalAddress <<  std::endl;
	std::cout << "Email address    : " << this->_emailAddress <<  std::endl;
	std::cout << "Phone number     : " << this->_phoneNumber <<  std::endl;
	std::cout << "Birthday date    : " << this->_birthdayDate <<  std::endl;
	std::cout << "Favorite meal    : " << this->_favoriteMeal <<  std::endl;
	std::cout << "Underwear colour : " << this->_underwearColour <<  std::endl;
	std::cout << "darkest secret   : " << this->_darkesSecret <<  std::endl;
}

static void	printElement(int i, std::string str1, std::string str2, std::string str3)
{
	std::cout << "|";
	std::cout << std::setw(10) << i + 1;
	std::cout << "|";
	if (str1.size() > 10)
	{
		str1.resize(10);
		str1[9] = '.';
	}
	std::cout << std::setw(10) << str1;
	std::cout << "|";
	if (str2.size() > 10)
	{
		str2.resize(10);
		str2[9] = '.';
	}
	std::cout << std::setw(10) << str2;
	std::cout << "|";
	if (str3.size() > 10)
	{
		str3.resize(10);
		str3[9] = '.';
	}
	std::cout << std::setw(10) << str3;
	std::cout << "|" << std::endl;;
}

static void	printFirstLine()
{
	std::string	first(45, '-');

	std::cout << first << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	std::cout << first << std::endl;
}

void		contact::getContact(contact *phonebook)
{
	int			i;
	int			number;
	int	const	contactQuan = contact::getContactQuan();
	std::string	last(45, '-');

	i = 0;
	if (contactQuan == 0)
		std::cout << "You have no contacts" << std::endl;
	else
	{
		printFirstLine();
		while (i < contactQuan)
		{
			printElement(phonebook[i]._index, phonebook[i]._firstName, phonebook[i]._lastName, phonebook[i]._nickName);
			i++;
		}
		std::cout << last << std::endl;
		std::cout << "Type number from 1 to " << contactQuan << std::endl;
		while (1)
		{
			std::cin >> number;
			if (number > contactQuan || number < 1)
				std::cout << "Invalid number" << std::endl;
			else
			{
				phonebook[number - 1].printUserInfo();
				break ;
			}
		}
	}
}

int contact::_contactQuan = 0;