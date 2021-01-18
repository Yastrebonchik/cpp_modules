/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:28:42 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 11:28:42 by marvin           ###   ########.fr       */
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