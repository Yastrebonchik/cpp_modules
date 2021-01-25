/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:11:20 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:22:38 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria &src) : _xp(src._xp),  _type(src._type)
{
}

AMateria::~AMateria()
{
}

AMateria&			AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
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
	(void)target;
	this->_xp += 10;
}