/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:25:01 by marvin            #+#    #+#             */
/*   Updated: 2021/01/12 23:25:01 by marvin           ###   ########.fr       */
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