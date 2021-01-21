/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:25:59 by marvin            #+#    #+#             */
/*   Updated: 2021/01/21 16:25:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int		main()
{
	std::srand(time(0));
	Base	*ptr;

	ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
}