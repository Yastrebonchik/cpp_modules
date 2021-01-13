/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:16:08 by marvin            #+#    #+#             */
/*   Updated: 2021/01/13 23:25:09 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon humanweapon);
	~HumanA();
	void	attack();

private:
	std::string	_name;
	Weapon		_weapon;
};

#endif
