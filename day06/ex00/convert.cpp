/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:50:26 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/27 18:44:02 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include <math.h>

void	printChar(double value)
{
	std::cout << "char: ";
	if (isnan(value) || isinf(value))
		std::cout << "Impossible";
	else if (value < 32 || value > 126)
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(value) << "'";
	std::cout << std::endl;
}

void	printInt(double value)
{
	std::cout << "int: ";
	if (value < INT_MIN || value > INT_MAX || isnan(value))
		std::cout << "Impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void	printFloat(double value)
{
	std::cout << "float: ";
	if (value == INFINITY)
		std::cout << "+";
	std::cout << static_cast<float>(value);
	if ((isnan(value) || isinf(value)) && value > 0.00001 && value < 1000000)
		std::cout << "f";
	else if (value - static_cast<int>(value) == 0.0 && value > 0.00001 && value < 1000000)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
}

void	printDouble(double value)
{
	std::cout << "double: ";
	if (value == INFINITY)
		std::cout << "+";
	std::cout << (value);
	if (!isnan(value) && !isinf(value) && (value - static_cast<int>(value) == 0.0) && value > 0.00001 && value < 1000000)
		std::cout << ".0";
	std::cout << std::endl;
}

int		main(int argc, char **argv)
{
	double	value;

	if (argc != 2)
		std::cout << "Error: wrong number of arguments" << std::endl;
	else
	{
		if (argv[1][1] == '\0' && ((argv[1][0] > 32 && argv[1][0] < 48) || (argv[1][0] > 57 && argv[1][0] < 127)))
			value = argv[1][0];
		else
			value = std::strtod(argv[1], nullptr);
		printChar(value);
		printInt(value);
		printFloat(value);
		printDouble(value);
	}

	return (0);
}