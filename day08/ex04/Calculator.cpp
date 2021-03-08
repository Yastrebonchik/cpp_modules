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

Calculator::Calculator() : width(5)
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
		if (Calculator::ifNumber(exp[i]))
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
	std::cout << "Tokens: ";
	for (it = this->expr.begin(); it != ite; it++)
	{
		if (Calculator::ifNumber((*it)[0]))
		{
			std::cout << "Num(";
			std::cout << *it << ") ";
		}
		else if ((*it)[0] == '(')
			std::cout << "ParOpen ";
		else if ((*it)[0] == ')')
			std::cout << "ParClose ";
		else
		{
			std::cout << "Op(";
			std::cout << *it << ") ";
		}
	}
	std::cout << std::endl;
}

void	Calculator::printPolishNot()
{
	std::vector<std::string>::iterator	it;
	std::vector<std::string>::iterator	ite;

	ite = this->polishNot.end();
	std::cout << "Postfix: ";
	for (it = this->polishNot.begin(); it != ite; it++)
	{
		if (Calculator::ifNumber((*it)[0]))
			std::cout << "Num(";
		else
			std::cout << "Op(";
		std::cout << *it << ") ";
	}
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
		if (Calculator::ifNumber((*it)[0]))
		{
			if (this->width < 7 + (*it).length())
				this->width = 7 + (*it).length();
			this->polishNot.push_back(*it);
		}
		else if ((*it)[0] == '(')
			this->operands.push((*it)[0]);
		else if ((*it)[0] == ')')
		{
			while (!(this->operands.empty()) && this->operands.top() != '(')
			{
				oper = this->operands.top();
				this->polishNot.push_back(oper);
				oper.clear();
				this->operands.pop();
			}
			if (this->operands.empty())
			{
				std::cout << "Syntax error" << std::endl;
				exit (1);
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
		if (oper == "(")
		{
			std::cout << "Syntax error" << std::endl;
			exit (1);
		}
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

bool	Calculator::ifNumber(char num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}

std::string	Calculator::checkOp(std::string op)
{
	if (op == "+")
		return ("Add");
	else if (op == "-")
		return ("Substract");
	else if (op == "*")
		return ("Multiply");
	else
		return ("Division");
}

std::string	Calculator::printFirstElem(std::string it)
{
	if (Calculator::ifNumber(it[0]))
		return ("I Num(" + it + ")");
	else
		return ("I Op(" + it + ")");
}

void	Calculator::evalExpression(char *argv)
{
	std::vector<std::string>::iterator	it;
	std::vector<std::string>::iterator	ite;
	MutantStack<int>::reverse_iterator	sit;
	MutantStack<int>::reverse_iterator	site;
	int									a;
	int									b;

	this->getExpression(argv);
	this->printExpression();
	this->polishNotation();
	this->printPolishNot();
	ite = this->polishNot.end();
	std::cout << this->width << std::endl;
	for (it = this->polishNot.begin(); it != ite; it++)
	{
		if (Calculator::ifNumber((*it)[0]))
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
		std::cout << std::setw(this->width) << std::left << this->printFirstElem(*it);
		if (Calculator::ifNumber((*it)[0]))
			std::cout << " | OP Push      | ST";
		else
			std::cout << " | OP " << std::setw(9) << std::left << Calculator::checkOp(*it) << " | ST";
		site = this->result.rend();
		for (sit = this->result.rbegin(); sit != site; sit++)
			std::cout << " " << (*sit);
		std::cout << "]" << std::endl;
	}
	a = this->result.top();
	this->result.pop();
	if (!(this->result.empty()))
	{
		std::cout << "Wrong input, not enough operands" << std::endl;
		exit (1);
	}	
	std::cout << "Result: " << a << std::endl;
}
