/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:10:27 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 20:20:30 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
	SuperMutant();
	SuperMutant(const SuperMutant &src);
	virtual ~SuperMutant();

	SuperMutant& 		operator=(const SuperMutant &rhs);

	void			takeDamage(int damage);
};

#endif