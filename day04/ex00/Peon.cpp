/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:45:16 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 14:58:53 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &src) : Victim(src)
{
	this->_name = src._name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator=(const Peon& rhs)
{
	this->_name = rhs._name;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Peon &src)
{
	out << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return (out);
}

void 		Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}