/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:13:34 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 00:13:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &src);
	virtual ~PlasmaRifle();

	PlasmaRifle& 		operator=(const PlasmaRifle &rhs);

	void	attack(void) const;
};

#endif