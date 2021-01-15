/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:22:05 by marvin            #+#    #+#             */
/*   Updated: 2021/01/15 01:22:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << this->_literal);
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(n * (1 << this->_literal)));
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
	return (this->_value);
}

void 	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());

	return *this;
}

int 	Fixed::toInt( void ) const
{
	return (this->_value >> this->_literal);
}

float 	Fixed::toFloat( void ) const
{
	return (float(this->_value) / float(1 << this->_literal));
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
	float	i;

	i = c.toFloat();
	out << i;
	return (out);
}