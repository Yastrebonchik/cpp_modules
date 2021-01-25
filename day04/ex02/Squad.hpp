/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:57:23 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:47:44 by kcedra           ###   ########.fr       */
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
	Squad(const Squad &src);
	virtual	~Squad();

	Squad&			operator=(const Squad &src);

	int 			getCount() const;
	int 			push(ISpaceMarine* marine);
	ISpaceMarine* 	getUnit(int n) const;
};

#endif
