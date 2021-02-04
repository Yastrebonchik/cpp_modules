/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:22:05 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/04 17:34:04 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
}

Fixed::Fixed(int n)
{
	this->setRawBits(n << this->_literal);
}

Fixed::Fixed(float n)
{
	this->setRawBits(roundf(n * (1 << this->_literal)));
}

Fixed::Fixed(const	Fixed &rhs)
{
	*this = rhs;
}

Fixed::~Fixed()
{
}

int 	Fixed::getRawBits(void) const
{
	return (this->_raw);
}

void 	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

Fixed&	Fixed::operator=(const	Fixed &rhs)
{
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return *this;
}

Fixed	Fixed::operator+(const	Fixed &rhs) const
{
	Fixed	ret;
	int		val;

	val	= this->getRawBits() + rhs.getRawBits();
	ret.setRawBits(val);
	return (ret);
}

Fixed	Fixed::operator-(const	Fixed &rhs) const
{
	Fixed	ret;
	int		val;

	val	= this->getRawBits() - rhs.getRawBits();
	ret.setRawBits(val);
	return (ret);
}

Fixed	Fixed::operator*(const	Fixed &rhs) const
{
	Fixed	ret;
	float	val;

	val = this->toFloat() * rhs.toFloat();
	ret = Fixed(val);
	return (ret);
}

Fixed	Fixed::operator/(const	Fixed &rhs) const
{
	Fixed	ret;
	float	val;

	val = this->toFloat() / rhs.toFloat();
	ret = Fixed(val);
	return (ret);
}

bool	Fixed::operator>(const	Fixed &rhs) const
{
	return(this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const	Fixed &rhs) const
{
	return(this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(const	Fixed &rhs) const
{
	return(this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(const	Fixed &rhs) const
{
	return(this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(const	Fixed &rhs) const
{
	return(this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(const	Fixed &rhs) const
{
	return(this->getRawBits() != rhs.getRawBits());
}

Fixed const		&min(Fixed const &fix1, Fixed const &fix2)
{
	if (fix1 < fix2)
		return (fix1);
	else
		return (fix2);
}

Fixed& 			min(Fixed& fix1, Fixed& fix2)
{
	if (fix1 < fix2)
		return (fix1);
	else
		return (fix2);
}

Fixed const		&max(Fixed const &fix1, Fixed const &fix2)
{
	if (fix1 > fix2)
		return (fix1);
	else
		return (fix2);
}

Fixed&			max(Fixed& fix1, Fixed& fix2)
{
	if (fix1 > fix2)
		return (fix1);
	else
		return (fix2);
}

Fixed&	Fixed::operator++()
{
	this->_raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed result(*this);

	this->_raw++;
	return (result);
}

Fixed&	Fixed::operator--()
{
	this->_raw--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed result(*this);

	this->_raw--;
	return (result);
}

int 	Fixed::toInt(void) const
{
	return (this->_raw >> this->_literal);
}

float 	Fixed::toFloat(void) const
{
	return (float(this->_raw) / float(1 << this->_literal));
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
	float	i;

	i = c.toFloat();
	out << i;
	return (out);
}