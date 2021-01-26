/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 01:00:01 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 19:38:48 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALFORM_HPP
# define PRESIDENTIALFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	std::string	const _target;

public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual	~PresidentialPardonForm();

	PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);
	void					execute(Bureaucrat const & executor) const;
};

#endif