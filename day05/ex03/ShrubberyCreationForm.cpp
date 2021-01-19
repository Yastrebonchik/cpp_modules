/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 20:57:44 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 20:57:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string	const	ShrubberyCreationForm::trees[3] = 
{
"             /\\				\n" \
"            <  >				\n" \
"             \\/				\n" \
"             /\\				\n" \
"            /  \\				\n" \
"           /++++\\				\n" \
"          /  ()  \\			\n" \
"          /      \\			\n" \
"         /~`~`~`~`\\			\n" \
"        /  ()  ()  \\			\n" \
"        /          \\			\n" \
"       /*&*&*&*&*&*&\\			\n" \
"      /  ()  ()  ()  \\		\n" \
"      /              \\		\n" \
"     /++++++++++++++++\\		\n" \
"    /  ()  ()  ()  ()  \\		\n" \
"    /                  \\		\n" \
"   /~`~`~`~`~`~`~`~`~`~`\\		\n" \
"  /  ()  ()  ()  ()  ()  \\	\n" \
"  /*&*&*&*&*&*&*&*&*&*&*&\\	\n" \
" /                        \\	\n" \
"/,.,.,.,.,.,.,.,.,.,.,.,.,.\\	\n" \
"            |   |				\n" \
"           |`````|				\n" \
"           \\_____/			\n" ,
"         v			 \n" \
"        >X<		 \n" \
"         A			 \n" \
"        d$b		 \n" \
"      .d\\$$b.		 \n" \
"    .d$i$$\\$$b.	 \n" \
"       d$$@b		 \n" \
"      d\\$$$ib		 \n" \
"    .d$$$\\$$$b	 \n" \
"  .d$$@$$$$\\$$ib.	 \n" \
"      d$$i$$b		 \n" \
"     d\\$$$$@$b	 \n" \
"  .d$@$$\\$$$$$@b.	 \n" \
".d$$$$i$$$\\$$$$$$b.\n" \
"        ###		 \n" \
"        ###		 \n" \
"        ### mh		 \n",
"      /\\      	\n" \
"     /\\*\\     	\n" \
"    /\\O\\*\\    	\n" \
"   /*/\\/\\/\\   	\n" \
"  /\\O\\/\\*\\/\\  \n" \
" /\\*\\/\\*\\/\\/\\\n" \
"/\\O\\/\\/*/\\/O/\\\n" \
"      ||      	\n" \
"      ||      	\n" \
"      ||		\n"
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	output;
	std::string		newfile;

	if (executor.getGrade() > this->getExecGrade())
		throw Form::UnableToExecuteException();
	if (this->getSigned() == 0)
		throw Form::NotSignedException();
	newfile = this->_target + "_shrubbery";
	output.open(newfile);
	if (output.is_open() == 0)
		throw Form::FileOpenException();
	output << ShrubberyCreationForm::trees[0] << std::endl << std::endl;
	output << ShrubberyCreationForm::trees[1] << std::endl << std::endl;
	output << ShrubberyCreationForm::trees[2];
}