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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	Form		*trees = new ShrubberyCreationForm("New Year");
	Bureaucrat	yoshimura("Yoshimura", 1);

	std::srand(time(0));
	yoshimura.signForm(*trees);
	try
	{
		yoshimura.executeForm(*trees);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Form		*robotomy = new RobotomyRequestForm("CEO of clown department");

	yoshimura.signForm(*robotomy);
	yoshimura.executeForm(*robotomy);

	Form		*president = new PresidentialPardonForm("John Wick");

	yoshimura.signForm(*president);
	yoshimura.executeForm(*president);
	return (0);
}