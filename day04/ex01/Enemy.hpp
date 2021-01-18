/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:28:04 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 00:28:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
protected:
	Enemy();

	int			_hitPoints;
	std::string	_type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &src);
	virtual ~Enemy();

	Enemy& 		operator=(const Enemy &rhs);

	std::string 	getType() const;
	int 			getHP() const;
	virtual void	takeDamage(int damage);
};

#endif
