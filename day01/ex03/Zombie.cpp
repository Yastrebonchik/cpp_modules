/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:57:52 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 13:57:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::setZombie(std::string type, std::string name)
{
	this->_type = type;
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << this->_name << " " << this->_type << " Braiiiiiiinnnssss..." << std::endl;
}