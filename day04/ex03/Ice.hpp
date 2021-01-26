/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:35:21 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/26 14:28:33 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	
public:
	Ice();
	virtual	~Ice();
	Ice(const Ice &src);

	Ice&	operator=(const Ice &rhs);
	Ice* 	clone() const;
	void 	use(ICharacter& target);
};

#endif
