/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculator.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:44:17 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/07 12:44:17 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATOR
# define CALCULATOR

# include <string>
# include <vector>
# include <stack>
# include <iostream>
# include <stdlib.h>

class Calculator
{
private:
	std::vector<std::string>	expr;
	std::vector<std::string>	polishNot;
	std::stack<char>			operands;
	std::stack<int>				result;

	int		checkPriority(char oper);
	void	getExpression(char *expr);
	void	polishNotation();
	void	printExpression();
	void	printPolishNot();

public:
	Calculator();
	~Calculator();
	void	evalExpression(char *argv);
};

#endif