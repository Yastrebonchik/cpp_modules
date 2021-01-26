/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:55:13 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 23:31:48 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	Form		*trees = new ShrubberyCreationForm("New Year");
	Form		*robotomy = new RobotomyRequestForm("CEO of clown department");
	Form		*president = new PresidentialPardonForm("John Wick");
	Bureaucrat	yoshimura("Yoshimura", 146);

	std::srand(time(0));
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Tests with shrubbery form" << std::endl;
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to sign form with grade higher than bureaucrat's grade" << std::endl;
		yoshimura.signForm(*trees);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	yoshimura.incrementGrade();
	std::cout << yoshimura;
	yoshimura.signForm(*trees);
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to exec form with grade higher than bureaucrat's grade" << std::endl;
		yoshimura.executeForm(*trees);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	while (yoshimura.getGrade() > 137)
		yoshimura.incrementGrade();
	std::cout << yoshimura;
	yoshimura.executeForm(*trees);
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Tests with robotomy form" << std::endl;
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to sign form with grade higher than bureaucrat's grade" << std::endl;
		yoshimura.signForm(*robotomy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	while (yoshimura.getGrade() > 72)
		yoshimura.incrementGrade();
	std::cout << yoshimura;
	yoshimura.signForm(*robotomy);
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to exec form with grade higher than bureaucrat's grade" << std::endl;
		yoshimura.executeForm(*robotomy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	while (yoshimura.getGrade() > 45)
		yoshimura.incrementGrade();
	std::cout << yoshimura;
	yoshimura.executeForm(*robotomy);
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Tests with presidental form" << std::endl;
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to sign form with grade higher than bureaucrat's grade" << std::endl;
		yoshimura.signForm(*president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	while (yoshimura.getGrade() > 25)
		yoshimura.incrementGrade();
	std::cout << yoshimura;
	yoshimura.signForm(*president);
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to exec form with grade higher than bureaucrat's grade" << std::endl;
		yoshimura.executeForm(*president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	while (yoshimura.getGrade() > 5)
		yoshimura.incrementGrade();
	std::cout << yoshimura;
	yoshimura.executeForm(*president);

	Form		*treessign = new ShrubberyCreationForm("New Year");
	Form		*robotomysign = new RobotomyRequestForm("CEO of clown department");
	Form		*presidentsign = new PresidentialPardonForm("John Wick");
	Bureaucrat	samuel("Yoshimura", 1);

	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to exec treeform without sign" << std::endl;
		yoshimura.executeForm(*treessign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to exec robotomyform without sign" << std::endl;
		yoshimura.executeForm(*robotomysign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "--------------------------------------------------------------------------" << std::endl;
		std::cout << "Attempting to exec presidental form without sign" << std::endl;
		yoshimura.executeForm(*presidentsign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;

	delete trees;
	delete treessign;
	delete robotomy;
	delete robotomysign;
	delete president;
	delete presidentsign;
	return (0);
}