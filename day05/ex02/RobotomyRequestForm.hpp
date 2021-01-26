/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:45:44 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 19:38:54 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

# include <iostream>
# include <string>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	std::string	const _target;

public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual	~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(const RobotomyRequestForm &rhs);
	void					execute(Bureaucrat const & executor) const;
};

#endif