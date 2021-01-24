/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:28:04 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 20:29:53 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
private:
	Enemy();

protected:
	int			_hitPoints;
	std::string	_type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &src);
	virtual ~Enemy();

	Enemy& 				operator=(const Enemy &rhs);

	std::string const	getType() const;
	int 				getHP() const;
	virtual void		takeDamage(int damage);
};

#endif
