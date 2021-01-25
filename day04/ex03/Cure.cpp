/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:50:10 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:33:25 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	this->_type = "cure";
}

Cure::Cure(const Cure &src) : AMateria(src)
{
}

Cure::~Cure()
{
}

Cure&		Cure::operator=(const Cure &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Cure* 		Cure::clone() const
{
	Cure*	copy = new Cure(*this);

	return (copy);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
