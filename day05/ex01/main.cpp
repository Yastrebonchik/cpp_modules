/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:55:13 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 15:55:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Form		b28("b28", 100, 50);
	Form		c28("c28", 1, 1);
	Bureaucrat	yoshimura("yoshimura", 1);

	std::cout << yoshimura << b28 << c28;
	yoshimura.signForm(b28);
	yoshimura.decrementGrade();
	try
	{
		yoshimura.signForm(c28);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		yoshimura.signForm(b28);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form impossible("impossible", 0, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << c28 << b28;

	return (0);
}