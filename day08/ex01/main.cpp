/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 01:54:42 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/06 01:54:42 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	Span sp = Span(5);

	std::cout << "What the fuck" << std::endl;
	// try
	// {
	// 	std::cout << sp.shortestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	std::cout << "Before addNumber" << std::endl;
	sp.addNumber(5);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.addNumber(3);
	sp.addNumber(INT_MIN);
	sp.addNumber(INT_MAX);
	sp.addNumber(17);
	std::cout << "After addNumber" << std::endl;

	try
	{
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "I'm here" << std::endl;
	try
	{
		std::cout << "Inside list try" << std::endl;
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		//lst.push_back(4);

		Span spexception = Span(3);
		spexception.addNumber(lst.begin(), lst.end());
		std::cout << spexception.longestSpan() << std::endl;
		std::cout << spexception.shortestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}