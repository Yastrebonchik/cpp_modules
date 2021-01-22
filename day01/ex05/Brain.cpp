/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:12:52 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:26:27 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_mass = std::rand() % 900 + 1100;
}

Brain::~Brain()
{
}

std::string	Brain::identify() const 
{
	std::stringstream		stream;

	stream << this;
	return (stream.str());
}

int			Brain::getBrainMass() const
{
	return (this->_mass);
}