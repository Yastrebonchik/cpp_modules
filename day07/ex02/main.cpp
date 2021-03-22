/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:17:18 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/22 19:15:27 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Fixed.hpp"

int		main(void)
{
	Fixed			fl(3.14f);
	Array<Fixed>	voidarr;
	Array<Fixed>	filled(10);
	int				i = 0;

	std::cout << "Voidarr len is: " << voidarr.size() << std::endl;
	std::cout << "----------------------------" << std::endl;
	while (i < filled.size())
		std::cout << filled[i++] << std::endl;
	std::cout << "----------------------------" << std::endl;
	voidarr = filled;
	std::cout << "Now Voidarr len is: " << voidarr.size() << std::endl;
	i = 0;
	while (i < filled.size())
		filled[i++] = fl++;
	voidarr = filled;
	i = 0;
	while (i < voidarr.size())
		voidarr[i++] = fl++;
	i = 0;
	while (i < filled.size())
		std::cout << filled[i++] << std::endl;
	std::cout << "----------------------------" << std::endl;
	i = 0;	
	while (i < voidarr.size())
		std::cout << voidarr[i++] << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		std::cout << filled[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << filled[filled.size()] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << voidarr[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<std::string>	strarray(5);

	std::cout << "----------------------------" << std::endl;
	i = 0;
	while (i < strarray.size())
		std::cout << strarray[i++] << std::endl;
	std::cout << "----------------------------" << std::endl;
	i = 0;
	while (i < strarray.size())
		strarray[i++] = "Hello";
	i = 0;
	while (i < strarray.size())
		std::cout << strarray[i++] << std::endl;
	
	Array<std::string>	copy(strarray);

	i = 0;
	std::cout << "----------------------------" << std::endl;
	while (i < copy.size())
		std::cout << copy[i++] << std::endl;
}