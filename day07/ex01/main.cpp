/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 01:13:06 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/04 01:13:06 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	std::string	array[3] = {"kek", "lol", "karvalol"};
	int			intarray[3] = {1, 2, 3};

	iter(array, 3, printarray);
	std::cout << "-----------------------------------" << std::endl;
	iter(intarray, 3, printarray);
}
