/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:13:53 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/22 04:14:12 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base*	generate(void)
{
	Base	*ptr;
	int		rand;

	rand = std::rand() % 3;
	if (rand == 0)
	{
		ptr = new A();
		std::cout << "A generated" << std::endl;
	}
	else if (rand == 1)
	{
		ptr = new B();
		std::cout << "B generated" << std::endl;
	}
	else
	{
		ptr = new C();
		std::cout << "C generated" << std::endl;
	};
	return (ptr);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
	else
		std::cout << "Error occured" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}