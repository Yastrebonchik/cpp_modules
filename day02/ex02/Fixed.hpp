/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 00:22:12 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 21:37:26 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	Fixed(const Fixed& src);
	int 	toInt(void) const;
	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	float 	toFloat(void) const;

	Fixed&	operator=(const Fixed &rhs);
	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	operator+(const	Fixed &rhs) const;
	Fixed	operator-(const	Fixed &rhs) const;
	Fixed	operator/(const	Fixed &rhs) const;
	Fixed	operator*(const	Fixed &rhs) const;
	bool	operator>(const	Fixed &rhs) const;
	bool	operator<(const	Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;

private:
	int					_raw;
	static const int	_literal = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &c); 

Fixed const	&min(Fixed const &fix1, Fixed const &fix2);
Fixed const	&max(Fixed const &fix1, Fixed const &fix2);
Fixed	&min(Fixed &fix1, Fixed &fix2);
Fixed	&max(Fixed &fix1, Fixed &fix2);

#endif
