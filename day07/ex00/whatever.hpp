/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 00:46:15 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/22 18:49:00 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

class whatever
{
public:
	whatever(int n) : _n(n) {}
	bool	operator==(whatever const &rhs) const {return (this->_n == rhs._n);}
	bool	operator!=(whatever const &rhs) const {return (this->_n != rhs._n);}
	bool	operator>=(whatever const &rhs) const {return (this->_n >= rhs._n);}
	bool	operator<=(whatever const &rhs) const {return (this->_n <= rhs._n);}
	bool	operator>(whatever const &rhs) const {return (this->_n > rhs._n);}
	bool	operator<(whatever const &rhs) const {return (this->_n < rhs._n);}
	int		getN() const {return (this->_n);}
	~whatever() {};
private:
	int	_n;
};

template <typename T>
void	swap(T& value1, T& value2)
{
	T	value = value1;

	value1 = value2;
	value2 = value;
}

template <typename T>
T	&max(T &value1, T &value2)
{
	if (value1 > value2)
		return (value1);
	else
		return (value2);
}

template <typename T>
T	&min(T &value1, T &value2)
{
	if (value1 < value2)
		return (value1);
	else
		return (value2);
}

std::ostream&	operator<<(std::ostream &out, whatever const &src) 
{
	out << src.getN();
	return (out);
};

#endif