/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:58:17 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 16:58:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
	
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &src);
	~TacticalMarine();

	TacticalMarine&	operator=(const	TacticalMarine &src);

	TacticalMarine* clone() const;
	void			battleCry() const;
	void 			rangedAttack() const;
	void 			meleeAttack() const;
};

#endif
