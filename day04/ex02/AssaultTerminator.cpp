/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:49:44 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 17:24:28 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssualtTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	(void)src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator* AssaultTerminator::clone() const
{
	AssaultTerminator*	clone = new AssaultTerminator;
	return (clone);
}

AssaultTerminator&	AssaultTerminator::operator=(const	AssaultTerminator &src)
{
	(void)src;
	return (*this);
}

void 			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void 			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}