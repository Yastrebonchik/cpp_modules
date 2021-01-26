/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 01:10:59 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/20 01:10:59 by kcedra           ###   ########.fr       */
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

	Form*	makeForm(std::string name, std::string target);
	static void	createTeamplate(std::string target);
};

#endif
