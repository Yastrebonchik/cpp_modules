/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:52 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/22 19:45:44 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int>	vector1;
	std::list<int>		lst1;

	vector1.push_back(1);
	vector1.push_back(2);
	vector1.push_back(4);
	vector1.push_back(3);
	vector1.push_back(3);
	std::cout << *easyfind(vector1, 3) << std::endl;

	lst1.push_back(123421);
	lst1.push_back(5);
	lst1.push_back(3);
	lst1.push_back(2);
	lst1.push_back(1);
	lst1.push_back(1);

	std::cout << *easyfind(lst1, 123421) << std::endl;

	std::cout << *easyfind(lst1, 1) << std::endl;

	std::cout << "----------------------------" << std::endl;
	std::list<int>::iterator i;
	std::list<int>::iterator count = lst1.end();
	for (i = lst1.begin(); i != count; i++)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "----------------------------" << std::endl;
	std::cout << *easyfind(lst1, -1413) << std::endl;
	std::cout << *lst1.end() << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << *(--lst1.end()) << std::endl;
	
	return (0);
}