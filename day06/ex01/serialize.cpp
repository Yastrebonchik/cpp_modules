/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:00:45 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/02 01:27:53 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void*	serialize(void)
{
	int			i;
	int			j;
	int			number;
	std::string	str;
	char*		result = new char[52];
	char*		reinterpet;

	i = 0;
	j = 0;
	while (j < 8)
	{
		str[j]= static_cast<char>(j + 65);//std::rand() % 25 + 65);
		j++;
	}
	reinterpet = reinterpret_cast<char*>(&str);
	j = 0;
	while (i < 24)
		result[i++] = reinterpet[j++];
	number = std::rand() % 10;
	reinterpet = reinterpret_cast<char*>(&number);
	j = 0;
	while (i < 28)
		result[i++] = reinterpet[j++];
	j = 0;
	while (j < 8)
		str[j++] = static_cast<char>(std::rand() % 25 + 65);
	reinterpet = reinterpret_cast<char*>(&str);
	j = 0;
	while (i < 52)
		result[i++] = reinterpet[j++];
	return ((void*)result);
}

Data*	deserialize(void *raw)
{
	Data*	data = new Data();
	char*	rawdata;

	rawdata = static_cast<char*>(raw);
	data->s1 = std::string(rawdata, 24);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(rawdata) + 24);
	data->s2 = std::string(rawdata + 28, 24);
	return (data);
}