/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:14:03 by marvin            #+#    #+#             */
/*   Updated: 2021/01/21 16:14:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>

class Base
{
private:
	
public:
	Base();
	virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify_from_pointer(Base * p);
void 	identify_from_reference(Base & p);

#endif
