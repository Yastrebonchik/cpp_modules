/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:22:05 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 16:17:59 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor constructor called" << std::endl;
}

int 	Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return (this->_raw);
}

void 	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs)
		this->setRawBits(rhs.getRawBits());
	
	return (*this);
}