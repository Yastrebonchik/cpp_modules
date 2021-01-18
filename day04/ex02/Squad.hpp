/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:57:23 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 14:57:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	ISpaceMarine	**_squad;	
	int				_quan;

public:
	Squad();
	~Squad();

	int 			getCount() const;
	int 			push(ISpaceMarine* marine);
	ISpaceMarine* 	getUnit(int n) const;
};

#endif
