/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:12:52 by marvin            #+#    #+#             */
/*   Updated: 2021/01/13 14:12:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string	Brain::identify() const 
{
	//unsigned long int const	value = (unsigned long int)this;
	std::stringstream		stream;

	stream << std::uppercase << std::hex << this;
	return (stream.str());
}
