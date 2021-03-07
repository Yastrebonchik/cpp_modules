/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 00:31:27 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/07 00:31:27 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Calculator.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong input" << std::endl;
		return (0);
	}
	Calculator	test;

	test.evalExpression(argv[1]);
}