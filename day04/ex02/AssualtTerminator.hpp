/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssualtTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:48:53 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 18:41:18 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ASSUALTTERMINATOR_HPP
# define ASSUALTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
	
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &src);
	virtual	~AssaultTerminator();

	AssaultTerminator&	operator=(const	AssaultTerminator &src);

	AssaultTerminator* clone() const;
	void			battleCry() const;
	void 			rangedAttack() const;
	void 			meleeAttack() const;
};

#endif