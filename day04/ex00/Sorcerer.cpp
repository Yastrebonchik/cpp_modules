/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:24:31 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 14:24:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src) : _name(src.getName()), _title(src.getTitle())
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}

std::string	Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void		Sorcerer::polymorph(Victim const &src) const
{
	src.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &src)
{
	out << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}