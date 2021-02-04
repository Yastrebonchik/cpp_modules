/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:05:09 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/04 01:26:19 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::string const	Intern::_forms[15] = 
{
	"shrubbery creation",
	"shrubbery creation form",
	"shrubberycreationform",
	"srhubbery form",
	"shrubberyform",
	"robotomy request",
	"robotomy request form",
	"robotomyrequestform",
	"robotomy form",
	"robotomyform",
	"presidental pardon",
	"presidental pardon form",
	"presidentalpardonform",
	"presidental form",
	"presidentalform"
};

Form*				Intern::_formPairs[3] = 
{
	nullptr, nullptr, nullptr
};

std::string	strToLower(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = std::tolower(str[i]);
		i++;
	}
	return (str);
}

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	(void)src;
}

Intern::~Intern()
{
}

Intern&	Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

void	Intern::createTeamplate(std::string target)
{
	Intern::_formPairs[0] = new ShrubberyCreationForm(target);
	Intern::_formPairs[1] = new RobotomyRequestForm(target);
	Intern::_formPairs[2] = new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	Form*		newform;
	std::string	formname;
	int			created;
	int			i;

	Intern::createTeamplate(target);
	newform = nullptr;
	i = 0;
	while (i < 15)
	{
		formname = Intern::_forms[i];
		if (formname == strToLower(name))
		{
			created = i / 5;
			newform = Intern::_formPairs[created];
			i = 0;
			while (i < 3)
			{
				if (i != created)
					delete Intern::_formPairs[i];
				i++;
			}
			return (newform);
		}
		i++;
	}
	std::cout << "Unable to create : form unknown" << std::endl;
	i = 0;
	while (i < 3)
		delete Intern::_formPairs[i++];
	return (newform);
}