/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:00:45 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/27 19:57:47 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void*	serialize(void)
{
	int			i;
	int			j;
	int			*number = new int[1];
	char		*num = new char[8];
	char		*res1 = new char[24];
	std::string	str1;
	char*		result = new char[52];
	void*		strcast;

	i = 0;
	while (i < 8)
		str1[i++] = static_cast<char>(std::rand() % 25 + 65);
	//result = reinterpret_cast<char*>(str1);
	strcast = &str1;
	res1 = reinterpret_cast<char*>(strcast);
	i = 0;
	j = 0;
	while (i < 24)
		res1[i++] = result[j++];
	j = 0;
	*number = std::rand() % 10000;
	num = reinterpret_cast<char*>(number);
	while (i < 32)
		result[i++] = num[j++];
	i = 0;
	while (i < 8)
		str1[i++] = static_cast<char>(std::rand() % 25 + 65);
	strcast = &str1;
	res1 = reinterpret_cast<char*>(strcast);
	i = 32;
	j = 0;
	while (i < 54)
		res1[i++] = result[j++];

	std::cout << "I'm here" << std::endl;
	//delete[] number;
	//delete[] num;
	//delete[] res1;
	std::cout << "I'm here" << std::endl;
	return (result);
}

Data*	deserialize(void *raw)
{
	Data*	data = new Data();
	char*	rawdata;

	rawdata = static_cast<char*>(raw);
	data->s1 = static_cast<std::string>(rawdata);
	//data->n = static_cast<int>(rawdata + 24);
	data->s2 = static_cast<std::string>(rawdata + 32);
	return (data);
}