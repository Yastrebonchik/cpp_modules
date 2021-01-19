/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:50:10 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 00:50:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	this->_type = "cure";
	this->_xp = 0;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	this->_xp = src._xp;
}

Cure::~Cure()
{
}

Cure&		Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		this->_xp = rhs._xp;
	return (*this);
}

Cure* 		Cure::clone() const
{
	Cure*	copy = new Cure(*this);

	return (copy);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
