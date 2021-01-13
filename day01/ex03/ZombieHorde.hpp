/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:33:54 by marvin            #+#    #+#             */
/*   Updated: 2021/01/12 23:33:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	announce();

private:
	int 		_zombieQuan;
	Zombie*		_zHordePtr;
};
