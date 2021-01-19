/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:11:20 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 00:11:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &src) : _type(src._type), _xp(src._xp)
{
}

AMateria::~AMateria()
{
}

AMateria&			AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_xp = rhs._xp;
	}
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return(this->_type);
}

unsigned int 		AMateria::getXP() const
{
	return (this->_xp);
}

void 				AMateria::use(ICharacter& target)
{
	//Кажется что костыль、а может и нет
	(void)target;
	this->_xp += 10;
}