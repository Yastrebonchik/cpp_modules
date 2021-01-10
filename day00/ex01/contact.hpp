/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:54:21 by alexander         #+#    #+#             */
/*   Updated: 2021/01/09 21:29:16 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.h"

class contact{

public:
	contact();
	~contact();
	void		addContact(void);
	void		getContact(void);
	static int	getContactQuan(void);
	static void	incContactQuan(void);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColour;
	std::string _darkesSecret;
	static int	_contactQuan;
};

#endif