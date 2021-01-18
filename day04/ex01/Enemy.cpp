/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:27:58 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 00:27:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hitPoints(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &src) : _hitPoints(src.getHP()), _type(src.getType())
{
}

Enemy::~Enemy()
{
}

Enemy& 		Enemy::operator=(const Enemy &rhs)
{
	if (this != &rhs)
	{
		this->_hitPoints = rhs.getHP();
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string	Enemy::getType() const
{
	return (this->_type);
}

int			Enemy::getHP() const
{
	return (this->_hitPoints);
}

void		Enemy::takeDamage(int damage)
{
	int hp;

	if (damage > 0)
	{
		hp = this->getHP() - damage;
		if (hp < 0)
			hp = 0;
		this->_hitPoints = hp;
	}
}