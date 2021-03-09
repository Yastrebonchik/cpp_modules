/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:50:11 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/05 16:50:11 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <vector>
# include <list>

template <typename T>
typename T::iterator	easyfind(T& container, int find)
{
	return (std::find(container.begin(), container.end(), find));
}

#endif
