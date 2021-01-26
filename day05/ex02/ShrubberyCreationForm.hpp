/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 20:57:08 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 19:39:00 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRUBBERYCREATIONFORM_HPP
# define SCRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	std::string	const _target;
	static const std::string _trees[3];

public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	virtual	~ShrubberyCreationForm();

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &rhs);
	void					execute(Bureaucrat const & executor) const;
};

#endif
