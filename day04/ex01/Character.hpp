/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:39:47 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 19:23:04 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	Character();

	std::string	_name;
	int			_AP;
	AWeapon		*_weapon;

public:
	Character(std::string const & name);
	Character(const Character &src);
	virtual ~Character();

	Character&	operator=(const Character &rhs);

	void 				recoverAP(void);
	void 				equip(AWeapon* weapon);
	void 				attack(Enemy* enemy);
	int					getAP(void) const;
	AWeapon				*getWeapon(void) const;
	std::string	const	getName(void) const;
};

std::ostream &operator<<(std::ostream &out, const Character &src);

#endif
