/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:25:59 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/22 04:10:43 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int		main()
{
	std::srand(time(0));
	Base	*ptr;

	ptr = generate();
	identify_from_pointer(ptr);

	Base	&ref = *ptr;

	identify_from_reference(ref);

	delete ptr;
}