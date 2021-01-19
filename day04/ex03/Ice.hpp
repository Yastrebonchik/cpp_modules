/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:35:21 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 00:35:21 by marvin           ###   ########.fr       */
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
	~Ice();
	Ice(const Ice &src);

	Ice&	operator=(const Ice &rhs);
	Ice* 	clone() const;
	void 	use(ICharacter& target);
};

#endif
