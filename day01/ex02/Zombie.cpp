/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:57:52 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:25:52 by kcedra           ###   ########.fr       */
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