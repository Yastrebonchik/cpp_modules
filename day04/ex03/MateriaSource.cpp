/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:42:42 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 14:28:43 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i;

	i = 0;
	while  (i < 4)
		this->_book[i++] = nullptr;
}

MateriaSource::~MateriaSource()
{
	int 		i;
	int			j;

	i = 0;
	while  (i < 4)
	{
		if (this->_book[i] != nullptr)
		{
			j = i + 1;
			while (j < 4)
			{
				if (this->_book[j] == this->_book[i])
					this->_book[j] = nullptr;
				j++;
			}
			delete this->_book[i];
		}
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		if (src._book[i] == nullptr)
				this->_book[i] = nullptr;
			else
				this->_book[i] = src._book[i]->clone();
		i++;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &rhs)
{
	int i;

	if (this != &rhs)
	{
		i = 0;
		while  (i < 4)
		{
			if (this->_book[i] != nullptr)
				delete this->_book[i];
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (rhs._book[i] == nullptr)
				this->_book[i] = nullptr;
			else
				this->_book[i] = rhs._book[i]->clone();
			i++;
		}
	}
	return (*this);
}

void 			MateriaSource::learnMateria(AMateria* materia)
{
	int	i;

	i = 0;
	if (materia != nullptr)
	{
		while (i < 4)
		{
			if (this->_book[i] == nullptr)
			{
				this->_book[i] = materia;
				break ;
			}
			i++;
		}
	}
}

AMateria* 		MateriaSource::createMateria(std::string const & type)
{
	int 		i;
	AMateria*	materia;

	i = 0;
	while (i < 4)
	{
		if (this->_book[i]->getType() == type)
		{	
			materia = this->_book[i]->clone();
			return (materia);
		}
		i++;
	}
	return (0);
}