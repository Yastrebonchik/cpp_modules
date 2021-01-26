/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:55:13 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 18:52:08 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Form		b28("b28", 100, 50);
	Form		c28("c28", 1, 1);
	Bureaucrat	yoshimura("Yoshimura", 1);

	std::cout << yoshimura << b28 << c28;
	yoshimura.signForm(b28);
	yoshimura.decrementGrade();
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to sign form with grade higher than bureaucrat's grade" << std::endl;
		yoshimura.signForm(c28);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << c28 << b28;
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Attempting to sign already signed form" << std::endl;
	yoshimura.signForm(b28);
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout << "Attempting to create form with signGrade higher than 1" << std::endl;
		Form impossible("impossible", 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout << "Attempting to create form with signGrade lower than 150" << std::endl;
		Form impossible("impossible", 151, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout << "Attempting to create form with execGrade higher than 1" << std::endl;
		Form impossible("impossible", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout << "Attempting to create form with execGrade lower than 150" << std::endl;
		Form impossible("impossible", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;

	return (0);
}