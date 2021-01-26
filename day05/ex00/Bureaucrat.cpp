/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:55:04 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 18:14:52 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	Bureaucrat::throw_expeption(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
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
	Bureaucrat::throw_expeption(this->_grade - 1);
	this->_grade--;
}

void		Bureaucrat::decrementGrade()
{
	Bureaucrat::throw_expeption(this->_grade + 1);
	this->_grade++;
}

void		Bureaucrat::throw_expeption(int value)
{
	if (value < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (value > 150)
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

std::ostream&	operator<<(std::ostream &out, Bureaucrat &src)
{
	out << src.getName() << ", bureacrat grade " << src.getGrade() << std::endl;
	return (out);
}
