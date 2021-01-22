/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 00:22:12 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 19:11:48 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& src);
	Fixed&	operator=(const Fixed& rhs);
	int 	getRawBits(void) const;
	void 	setRawBits( int const raw);

private:
	int					_raw;
	static const int	_literal = 8;
};

#endif
