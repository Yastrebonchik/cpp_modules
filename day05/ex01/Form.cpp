/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:54:41 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 18:52:13 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(0)
{
	this->throw_expeption(signGrade);
	this->throw_expeption(execGrade);
}

Form::Form(const Form &src) : _name(src._name), _signGrade(src._signed), _execGrade(src._execGrade), _signed(src._signed)
{
}

Form::~Form()
{
}

Form&	Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

int			Form::getSignGrade() const
{
	return (this->_signGrade);
}

int			Form::getExecGrade() const
{
	return (this->_execGrade);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("FormException: Grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("FormException: Grade too Low");
}

void		Form::throw_expeption(int value)
{
	if (value < 1 || value < 1)
		throw Form::GradeTooHighException();
	else if (value > 150 || value > 150)
		throw Form::GradeTooLowException();
}

void		Form::beSigned(const Bureaucrat &src)
{
	if (this->_signGrade < src.getGrade())
		throw Form::GradeTooLowException();
	this->_signed = 1;
}

std::ostream&	operator<<(std::ostream &out, Form &src)
{
	if (src.getSigned())
		out << "Form " << src.getName() << ", form is signed, grade to sign ";
	else
		out << "Form " << src.getName() << ", form is not signed, grade to sign ";
	out << src.getSignGrade() << ", grade to exec " << src.getExecGrade() << std::endl;
	return (out);
}
