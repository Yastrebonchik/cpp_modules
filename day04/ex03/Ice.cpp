/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:36:43 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:33:28 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	this->_type = "ice";
}

Ice::Ice(const Ice &src) : AMateria(src)
{
}

Ice::~Ice()
{
}

Ice&		Ice::operator=(const Ice &rhs)
{
	this->_type = rhs._type;;
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