/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:47:45 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:25:31 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    memoryLeak()
{
	std::string*    panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int     main(void)
{
	memoryLeak();
	return (0);
}
