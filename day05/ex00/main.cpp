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

int		main()
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	dave("Dave", 100);

	std::cout << bob;
	std::cout << dave;
	try
	{
		bob.incrementGrade();
	}
	catch(std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		dave = bob;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bob;
	std::cout << dave;

	Bureaucrat	yoshimura("Yoshimura", 150);

	std::cout << yoshimura;
	try
	{
		Bureaucrat	jane("Jane", 1000);
		std::cout << jane;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		yoshimura.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bob;
	std::cout << dave;
	std::cout << yoshimura;
	try
	{
		Bureaucrat saul(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}