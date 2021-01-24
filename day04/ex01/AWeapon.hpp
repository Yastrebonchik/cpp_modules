/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 23:54:44 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 20:19:29 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
private:
	AWeapon();

protected:
	std::string	_name;
	int			_APCost;
	int			_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &src);
	virtual ~AWeapon();

	AWeapon& 		operator=(const AWeapon &rhs);

	std::string const	getName(void) const;
	int 				getAPCost() const;
	int 				getDamage() const;
	virtual void		attack() const = 0;
};

#endif
