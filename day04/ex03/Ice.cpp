/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:36:43 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 00:36:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	this->_type = "ice";
	this->_xp = 0;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	this->_xp = src._xp;
}

Ice::~Ice()
{
}

Ice&		Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		this->_xp = rhs._xp;
	return (*this);
}

Ice* 		Ice::clone() const
{
	Ice*	copy = new Ice(*this);

	return (copy);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}