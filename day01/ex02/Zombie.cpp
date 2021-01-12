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


Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce()
{
	std::cout << this->_name << " " << this->_type << " Braiiiiiiinnnssss..." << std::endl;
}