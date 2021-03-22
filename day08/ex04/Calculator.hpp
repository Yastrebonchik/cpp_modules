/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculator.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:44:17 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/22 22:35:00 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATOR
# define CALCULATOR

# include <string>
# include <vector>
# include <stack>
# include <iostream>
# include <stdlib.h>
# include "MutantStack.hpp"
# include <iomanip>

class Calculator
{
private:
	std::vector<std::string>	expr;
	std::vector<std::string>	polishNot;
	MutantStack<char>			operands;
	MutantStack<int>			result;
	size_t						width;

	int					checkPriority(char oper);
	void				getExpression(char *expr);
	void				polishNotation();
	void				printExpression();
	void				printPolishNot();
	std::string			printFirstElem(std::string it);
	static bool			ifNumber(char num);
	static std::string	checkOp(std::string op);

public:
	Calculator();
	Calculator(Calculator const &src);
	~Calculator();
	void	evalExpression(char *argv);

	Calculator&		operator=(Calculator const &rhs);
};

#endif