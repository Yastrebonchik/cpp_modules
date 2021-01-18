/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:58:15 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 14:58:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _squad(nullptr), _quan(0)
{
}

Squad::~Squad()
{
	int i;

	i = 0;
	while(i < this->_quan)
	{
		delete this->_squad[i];
		i++;
	}
	delete this->_squad;
}

int				Squad::getCount() const
{
	return (this->_quan);
}

int 			Squad::push(ISpaceMarine* marine)
{
	int				i;
	ISpaceMarine**	copy;

	if (marine == nullptr)
		return (this->_quan);
	if (this->_squad == nullptr)
	{
		//std::cout << "I'm here" << std::endl;
		this->_squad = new ISpaceMarine*[1];
		this->_squad[0] = marine;
	}
	else
	{
		i = 0;
		while (i < this->_quan)
		{
			if (marine == this->_squad[i])
				return (this->_quan);
			i++;
		}
		copy = new ISpaceMarine*[this->_quan + 1];
		i = 0;
		while (i < this->_quan)
		{
			copy[i] = this->_squad[i];
			//delete this->_squad[i];
			i++;
		}
		delete this->_squad;
		copy[i] = marine;
		this->_squad = copy;
	}
	//std::cout << "I'm here" << std::endl;
	this->_quan++;
	return (this->_quan);
}

ISpaceMarine* 	Squad::getUnit(int n) const
{
	if (this->_squad == nullptr || n > this->_quan)
		return (nullptr);
	return (this->_squad[n]);
}
