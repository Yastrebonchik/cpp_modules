/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 01:10:59 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 01:10:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	static const std::string 	_forms[15];
	static Form*				_formPairs[3];

public:
	Intern();
	Intern(const Intern &src);
	~Intern();

	Intern&	operator=(const Intern &rhs);

	class RequestFormUnknownException: public std::exception 
	{
		virtual const char* what() const throw();
	};

	Form*	makeForm(std::string name, std::string target);
	static void	createTeamplate(std::string target);
};

#endif
