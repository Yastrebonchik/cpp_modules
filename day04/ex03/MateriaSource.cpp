/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:42:42 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:33:31 by kcedra           ###   ########.fr       */
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
	int i;

	i = 0;
	while  (i < 4)
	{
		if (this->_book[i] != nullptr)
			delete this->_book[i];
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	int i;
	
	i = 0;
	while  (i < 4)
	{
		if (this->_book[i] != nullptr)
			delete this->_book[i];
		i++;
	}
	i = 0;
	while (i < 4)
		this->learnMateria(src._book[i++]);
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
			this->learnMateria(rhs._book[i++]);
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