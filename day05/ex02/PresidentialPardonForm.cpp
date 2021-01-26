/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 01:01:12 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 19:34:57 by kcedra           ###   ########.fr       */
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
	if (this->getSigned() == 0)
		throw Form::NotSignedException();
	else if (this->getExecGrade() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}