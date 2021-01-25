/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:09:11 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 14:59:22 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"


Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &src) : _name(src.getName())
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim&	Victim::operator=(const Victim& rhs)
{
	this->_name = rhs._name;
	return *this;
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, const Victim &src)
{
	out << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return (out);
}

void 		Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}