/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:54:29 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 15:54:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat;
# include "Form.hpp"
# include <iostream>
# include <string>

class Bureaucrat
{
private:
	Bureaucrat();
	std::string	_name;
	int			_grade;

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat&	operator=(const Bureaucrat &rhs);

	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception 
	{
		virtual const char* what() const throw();
	};

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		throw_expeption();
	void		signForm(Form &src) const;
	void		executeForm(Form const & form);
};


std::ostream&	operator<<(std::ostream &out, Bureaucrat &src);

#endif
