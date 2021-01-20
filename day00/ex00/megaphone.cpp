/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:43:53 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/20 16:36:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*strToUpper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
			std::cout << strToUpper(argv[i++]);
		std::cout << std::endl;
	}
}