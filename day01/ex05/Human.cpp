/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:57:28 by marvin            #+#    #+#             */
/*   Updated: 2021/01/13 14:57:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

Brain const& Human::getBrain()
{
	return (this->_brain);
}

std::string Human::identify() const
{
	return this->_brain.identify();
}