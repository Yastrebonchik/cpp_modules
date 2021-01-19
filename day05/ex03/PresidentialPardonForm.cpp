/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 01:01:12 by marvin            #+#    #+#             */
/*   Updated: 2021/01/20 01:01:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::string		newfile;

	if (executor.getGrade() > this->getExecGrade())
		throw Form::UnableToExecuteException();
	if (this->getSigned() == 0)
		throw Form::NotSignedException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}