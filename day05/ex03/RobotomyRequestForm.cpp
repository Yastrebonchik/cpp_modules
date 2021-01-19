/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:47:00 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 00:47:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robotomy Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::string		newfile;

	if (executor.getGrade() > this->getExecGrade())
		throw Form::UnableToExecuteException();
	if (this->getSigned() == 0)
		throw Form::NotSignedException();
	if (std::rand() % 2)
		std::cout << "* Driiiiiiiiilll .... * : "  << this->_target << " has been robotomyzed successfully" << std::endl;
	else
		std::cout << "Robotomy has failed :(" << std::endl;
}