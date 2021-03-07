/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculator.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:44:20 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/07 12:44:20 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Calculator.hpp"

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

void	Calculator::getExpression(char *expr)
{
	int 		i = 0;
	std::string	exp(expr);
	std::string	ch;

	while (exp[i])
	{
		if (exp[i] >= '0' && exp[i] <= '9')
		{
			while (exp[i] >= '0' && exp[i] <= '9')
				ch = ch + exp[i++];
		}
		else if (exp[i] != ' ')
			ch = exp[i++];
		else
			i++;
		if (!(ch.empty()))	
			this->expr.push_back(ch);
		ch.clear();
	}
}

void	Calculator::printExpression()
{
	std::vector<std::string>::iterator	it;
	std::vector<std::string>::iterator	ite;

	ite = this->expr.end();
	for (it = this->expr.begin(); it != ite; it++)
		std::cout << *it;
	std::cout << std::endl;
}

void	Calculator::printPolishNot()
{
	std::vector<std::string>::iterator	it;
	std::vector<std::string>::iterator	ite;

	ite = this->polishNot.end();
	for (it = this->polishNot.begin(); it != ite; it++)
		std::cout << *it;
	std::cout << std::endl;
}

void	Calculator::polishNotation()
{
	std::vector<std::string>::iterator	it;
	std::vector<std::string>::iterator	ite;
	std::string							oper;

	ite = this->expr.end();
	for (it = this->expr.begin(); it != ite; it++)
	{
		if ((*it)[0] >= '0' && (*it)[0] <= '9')
			this->polishNot.push_back(*it);
		else if ((*it)[0] == '(')
			this->operands.push((*it)[0]);
		else if ((*it)[0] == ')')
		{
			while (this->operands.top() != '(')
			{
				oper = this->operands.top();
				this->polishNot.push_back(oper);
				oper.clear();
				this->operands.pop();
			}
			this->operands.pop();
		}
		else
		{
			while (!(this->operands.empty()) && this->checkPriority((*it)[0]) <= this->checkPriority(this->operands.top()))
			{
				oper = this->operands.top();
				this->polishNot.push_back(oper);
				oper.clear();
				this->operands.pop();
			}
			this->operands.push(static_cast<char>((*it)[0]));
		}
	}
	while (!(this->operands.empty()))
	{
		oper = this->operands.top();
		this->polishNot.push_back(oper);
		oper.clear();
		this->operands.pop();
	}
}

int		Calculator::checkPriority(char oper)
{
	if (oper == '*' || oper == '/')
		return (2);
	else  if (oper == '+' || oper == '-')
		return (1);
	else
		return (0);
}

void	Calculator::evalExpression(char *argv)
{
	std::vector<std::string>::iterator	it;
	std::vector<std::string>::iterator	ite;
	int									a;
	int									b;

	this->getExpression(argv);
	this->printExpression();
	this->polishNotation();
	this->printPolishNot();
	ite = this->polishNot.end();
	for (it = this->polishNot.begin(); it != ite; it++)
	{
		if ((*it)[0] >= '0' && (*it)[0] <= '9')
			this->result.push((atoi((*it).c_str())));
		else
		{
			b = this->result.top();
			this->result.pop();
			a = this->result.top();
			this->result.pop();
			if ((*it)[0] == '+')
				a = a + b;
			else if ((*it)[0] == '-')
				a = a - b;
			else if ((*it)[0] == '*')
				a = a * b;
			else
				a = a / b;
			this->result.push(a);
		}
	}
	std::cout << "Result: " << a << std::endl;
}
