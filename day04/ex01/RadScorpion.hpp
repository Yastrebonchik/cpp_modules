/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:28:42 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 19:17:18 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	RadScorpion(const RadScorpion &src);
	virtual ~RadScorpion();

	RadScorpion& 	operator=(const RadScorpion &rhs);
};

#endif