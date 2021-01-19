/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:53:15 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 17:53:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Form
{
private:
	Form();
	const std::string	_name;
	const int			_signGrade;
	const int			_execGrade;
	bool				_signed;

public:
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &src);
	~Form();

	Form&	operator=(const Form &src);

	class GradeTooHighException: public std::exception 
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception 
	{
		virtual const char* what() const throw();
	};
	class AlreadySignedException: public std::exception 
	{
		virtual const char* what() const throw();
	};

	std::string	getName() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	bool		getSigned() const;
	void		throw_expeption();
	void		beSigned(const Bureaucrat &src);
};

std::ostream&	operator<<(std::ostream &out, Form &src);

#endif
