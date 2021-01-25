/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:58:15 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:42:59 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _squad(nullptr), _quan(0)
{
}

Squad::Squad(const Squad &src) : _squad(nullptr), _quan(0)
{
	int	i;
	int	quan;

	i = 0;
	quan = src.getCount();
	while (i < quan)
		this->push(src._squad[i++]->clone());
}

Squad::~Squad()
{
	int i;

	i = 0;
	while(i < this->_quan)
		delete this->_squad[i++];
	delete this->_squad;
}

Squad&			Squad::operator=(const Squad &rhs)
{
	int	i;
	int	quan;

	if (this != &rhs)
	{
		if (this->_squad != nullptr)
		{
			i = 0;
			while(i < this->_quan)
				delete this->_squad[i++];
			delete this->_squad;
			this->_squad = nullptr;
		}
		i = 0; 
		quan = rhs.getCount();
		this->_quan = 0;
		while (i < quan)
			this->push(rhs._squad[i++]->clone());
	}
	return (*this);
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
			i++;
		}
		delete this->_squad;
		copy[i] = marine;
		this->_squad = copy;
	}
	this->_quan++;
	return (this->_quan);
}

ISpaceMarine* 	Squad::getUnit(int n) const
{
	if (this->_squad == nullptr || n > this->_quan || n < 0)
		return (nullptr);
	return (this->_squad[n]);
}
