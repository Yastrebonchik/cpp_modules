/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:55:04 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 15:55:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	Bureaucrat::throw_expeption();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
	Bureaucrat::throw_expeption();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	Bureaucrat::throw_expeption();
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade()
{
	this->_grade--;
	Bureaucrat::throw_expeption();
}

void		Bureaucrat::decrementGrade()
{
	this->_grade++;
	Bureaucrat::throw_expeption();
}

void		Bureaucrat::throw_expeption()
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}

void		Bureaucrat::signForm(Form &src) const
{
	if (src.getSignGrade() < this->getGrade())
		std::cout << this->_name << " cannot sign " << src.getName() << " because grade to low" << std::endl;
	else if (src.getSigned())
		std::cout << this->_name << " cannot sign " << src.getName() << " because form is already signed" << std::endl;
	else
		std::cout << this->_name << " signs " << src.getName() << std::endl;
	src.beSigned(*this);
}

void		Bureaucrat::executeForm(Form const & form)
{
	if (form.getSigned() == 0)
		std::cout << "Can't execute form : it is not signed" << std::endl;
	else if (this->getGrade() > form.getExecGrade())
		std::cout << "Can't execute form : bureaucrat grade is low" << std::endl;
	else
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	form.execute(*this);
}

std::ostream&	operator<<(std::ostream &out, Bureaucrat &src)
{
	out << src.getName() << ", bureacrat grade " << src.getGrade() << std::endl;
	return (out);
}
