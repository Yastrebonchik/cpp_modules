/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:55:13 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 18:14:48 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	dave("Dave", 135);

	std::cout << bob;
	std::cout << dave;
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to increase Bureaucrat grade lower than 1" << std::endl;
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		bob.incrementGrade();
	}
	catch(std::exception const & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to decrease Bureaucrat grade higher than 150" << std::endl;
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		while (1)
		{
			std::cout << dave.getName() << "'s grade = " << dave.getGrade() << std::endl;
			dave.decrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;

	std::cout << bob;
	std::cout << dave;

	std::cout << "--------------------------------------------------------------------------" << std::endl;

	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to create Bureaucrat with grade higher than 150" << std::endl;
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		Bureaucrat	jane("Jane", 1000);
		std::cout << jane;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to create Bureaucrat with grade lower than 1" << std::endl;
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		Bureaucrat	jane("Jane", -15);
		std::cout << jane;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	
	return (0);
}