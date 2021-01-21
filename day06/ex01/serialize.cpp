/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:00:45 by marvin            #+#    #+#             */
/*   Updated: 2021/01/21 15:00:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void*	serialize(void)
{
	int		i;
	char	*num;
	char*	result = new char[20];

	i = 0;
	while (i < 8)
		result[i++] = static_cast<char>(std::rand() % 25 + 65);
	//num = reinterpret_cast<char*>(std::rand() % 10000);
	*reinterpret_cast<int*>(result + 8) = std::rand() % 10000;
	i += 4;
	while (i < 20)
		result[i++] = static_cast<char>(std::rand() % 24 + 65);
	return (result);
}

Data*	deserialize(void *raw)
{
	Data*	data = new Data();
	char*	rawdata;

	rawdata = static_cast<char*>(raw);
	data->s1 = static_cast<std::string>(rawdata);
	//data->n = static_cast<int>(rawdata + 8);
	data->s2 = static_cast<std::string>(rawdata + 12);
	return (data);
}