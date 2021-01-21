/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:13:53 by marvin            #+#    #+#             */
/*   Updated: 2021/01/21 16:13:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(/* args */)
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

void identify_from_reference( Base & p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast& bc)
	{}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast& bc)
	{}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast& bc)
	{}
}