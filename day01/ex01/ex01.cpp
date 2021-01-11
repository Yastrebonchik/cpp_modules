/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:47:45 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 11:47:45 by marvin           ###   ########.fr       */
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
