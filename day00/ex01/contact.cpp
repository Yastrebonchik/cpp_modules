/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:54:18 by alexander         #+#    #+#             */
/*   Updated: 2021/01/09 23:59:18 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

contact::contact()
{
	std::cout << "Constructor called" << std::endl;
}

contact::~contact()
{
	std::cout << "Destructor called" << std::endl;
}

int contact::getContactQuan(void)
{
	return (contact::_contactQuan);
}

void contact::incContactQuan(void)
{
	contact::_contactQuan++;
}

void contact::addContact(void)
{
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

void contact::getContact(void)
{
	std::cout << 
}

int contact::_contactQuan = 0;