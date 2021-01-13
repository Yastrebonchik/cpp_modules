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

std::string	const Brain::identify()
{
	std::stringstream	stream;

	stream << "0x" << std::uppercase << std::hex << (const unsigned long int)this;
	return (stream.str());
}
