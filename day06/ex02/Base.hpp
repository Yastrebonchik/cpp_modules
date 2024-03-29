/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:14:03 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/22 04:11:21 by kcedra           ###   ########.fr       */
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

Base*	generate(void);
void	identify_from_pointer(Base * p);
void 	identify_from_reference(Base & p);

#endif
