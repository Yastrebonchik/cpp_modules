/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rancher.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:21:26 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 18:17:05 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rancher.hpp"

Rancher::Rancher(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Some random rancher called " << this->_name << " just appeared!" << std::endl;
}

Rancher::Rancher(const Rancher &src) : Victim(src)
{
	*this = src;
	std::cout << "Some random rancher called " << this->_name << " just appeared!" << std::endl;
}

Rancher::~Rancher()
{
	std::cout << "Oh no, my cabbage ..." << std::endl;
}

Rancher&	Rancher::operator=(const Rancher &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

void		Rancher::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute kitten!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, const Rancher &src)
{
	out << "Hello! I'm " << src.getName() << ", and I'm the rancher!" << std::endl;
	return (out);
}