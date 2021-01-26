/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:47:00 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/27 02:05:09 by kcedra           ###   ########.fr       */
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
	if (this->getSigned() == 0)
		throw Form::NotSignedException();
	else if (this->getExecGrade() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	std::cout << "* Driiiiiiiiilll .... *" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomyzed successfully" << std::endl;
	else
		std::cout << "Robotomy has failed :(" << std::endl;
}