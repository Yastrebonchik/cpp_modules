/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:11:15 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/22 22:33:39 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int		main()
{
	MutantStack<int>    mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << mstack.top() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "-----------------------------" << std::endl;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "-----------------------------" << std::endl;
	std::stack<int> s(mstack);
	std::cout << mstack.top() << std::endl;

	std::cout << "-----------------------------" << std::endl;
	std::cout << "Reverse operator tests" << std::endl;
	MutantStack<int>::reverse_iterator itr = mstack.rbegin();
	MutantStack<int>::reverse_iterator itre = mstack.rend();
	while(itr != itre)
	{
		std::cout << *itr << std::endl;
		++itr;
	}
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Const operator tests" << std::endl;
	MutantStack<int>::const_iterator itc = mstack.cbegin();
	MutantStack<int>::const_iterator itce = mstack.cend();
	while(itc != itce)
	{
		std::cout << *itc << std::endl;
		++itc;
	}
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Const Reverse operator tests" << std::endl;
	MutantStack<int>::const_reverse_iterator itcr = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator itcre = mstack.crend();
	while(itcr != itcre)
	{
		std::cout << *itcr << std::endl;
		++itcr;
	}

	return 0;
}