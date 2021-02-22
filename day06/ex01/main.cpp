/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:03:09 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/22 03:48:04 by kcedra           ###   ########.fr       */
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
	std::cout << "Number = " << deserialized->n << std::endl;
	std::cout << "String 2 = " << deserialized->s2 << std::endl;

	delete reinterpret_cast<char*>(serialized);
	delete deserialized;

	return (0);
}