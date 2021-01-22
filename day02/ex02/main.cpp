/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 02:17:12 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 21:39:20 by kcedra           ###   ########.fr       */
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
	std::cout << "Max of a and b = " << max( a, b ) << std::endl;
	std::cout << "Min of a and b = " << min( a, b ) << std::endl;
	std::cout << "Max of a and c = " << max( a, c ) << std::endl;
	std::cout << "Min of a and c = " << min( a, c ) << std::endl;
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
	std::cout << "Max of a and d = " << max( a, d ) << std::endl;
	std::cout << "Min of a and d = " << min( a, d ) << std::endl;
	return (0);
}