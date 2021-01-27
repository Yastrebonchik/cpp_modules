/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:03:09 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/27 19:44:22 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main()
{
	Data	*deserialized;
	void	*serialized;
		
	std::srand(time(0));

	serialized = serialize();
	deserialized = deserialize(serialized);

	std::cout << "String 1 = " << deserialized->s1 << std::endl;
	std::cout << "String 2 = " << deserialized->s2 << std::endl;

	std::cout << "Size of data = " << sizeof(std::string) << std::endl;
	return (0);
}