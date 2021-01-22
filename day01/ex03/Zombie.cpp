/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:57:52 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:26:09 by kcedra           ###   ########.fr       */
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