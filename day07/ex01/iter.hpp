/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 01:12:19 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/22 18:48:30 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

class whatever
{
public:
	whatever(void) : _n(42) {}
	int		getN() const {return (this->_n);}
private:
	int	_n;
};

std::ostream&	operator<<(std::ostream &out, whatever const &src) 
{
	out << src.getN();
	return (out);
};

template <typename T>
void	printarray(T const & value)
{
	std::cout << value << std::endl;
}

template <typename T>
void	iter(T* address, size_t len, void (*func)(T const &value))
{
	size_t	i;

	i = 0;
	while (i < len)
		func(address[i++]);
}

#endif