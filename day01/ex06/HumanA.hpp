/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:16:08 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:44:34 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &humanweapon);
	~HumanA();
	void	attack();

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
