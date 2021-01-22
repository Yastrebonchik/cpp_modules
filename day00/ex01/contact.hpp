/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:54:21 by alexander         #+#    #+#             */
/*   Updated: 2021/01/21 19:37:46 by kcedra           ###   ########.fr       */
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
	void		printUserInfo(void);
	static void	getContact(contact *phonebook);
	static int	getContactQuan(void);

private:
	int			_index;
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
	std::string _darkestSecret;
	static int	_contactQuan;
};

#endif