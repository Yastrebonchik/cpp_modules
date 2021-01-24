/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mule.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:59:02 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 20:28:34 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MULE_HPP
# define MULE_HPP

# include "Enemy.hpp"

class Mule : public Enemy
{
private:

public:
	Mule();
	Mule(const Mule &src);
	virtual ~Mule();

	Mule& 		operator=(const Mule &rhs);
};

#endif
