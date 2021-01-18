/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 23:54:44 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 23:54:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
protected:
	AWeapon();

	std::string	_name;
	int			_APCost;
	int			_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &src);
	virtual ~AWeapon();

	AWeapon& 		operator=(const AWeapon &rhs);

	std::string 	getName(void) const;
	int 			getAPCost() const;
	int 			getDamage() const;
	virtual void	attack() const = 0;
};

#endif
