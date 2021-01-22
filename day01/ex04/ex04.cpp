/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:25:01 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:26:23 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brainptr = &brain;
	std::string	&brainref = brain;

	std::cout << *brainptr << std::endl;
	std::cout << brainref << std::endl;
}