/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:17:12 by marvin            #+#    #+#             */
/*   Updated: 2021/01/15 02:17:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const	c( Fixed( 5.5f) / Fixed(-2));
	Fixed d(c);

	std::cout << "a = " <<  a << std::endl;
	std::cout << "a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "C = " << c << std::endl;
	std::cout << "a raw bits = " << a.getRawBits() << std::endl;
	std::cout << "b raw bits = " << b.getRawBits() << std::endl;
	std::cout << "C raw bits = " << c.getRawBits() << std::endl;
	std::cout << "Max of a and b = " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min of a and b = " << Fixed::min( a, b ) << std::endl;
	std::cout << "Max of a and c = " << Fixed::max( a, c ) << std::endl;
	std::cout << "Min of a and c = " << Fixed::min( a, c ) << std::endl;
	std::cout << "a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "C = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	if (b > c)
		std::cout << "b > c" << std::endl;
	std::cout << c.toInt() << std::endl;
	if (d == c)
		std::cout << "d == c" << std::endl;
	if (a != c)
		std::cout << "a != c" << std::endl;
	d = b;
	std::cout << "a = " << a << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "Max of a and d = " << Fixed::max( a, d ) << std::endl;
	std::cout << "Min of a and d = " << Fixed::min( a, d ) << std::endl;
	return (0);
}