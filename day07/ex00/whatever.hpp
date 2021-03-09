/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 00:46:15 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/04 00:46:15 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template <typename T>
void	swap(T& value1, T& value2)
{
	T	value;

	value = value1;
	value1 = value2;
	value2 = value;
}

template <typename T>
T	max(T value1, T value2)
{
	if (value1 > value2)
		return (value1);
	else
		return (value2);
}

template <typename T>
T	min(T value1, T value2)
{
	if (value1 < value2)
		return (value1);
	else
		return (value2);
}

#endif