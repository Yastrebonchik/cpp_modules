/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:24:13 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 00:24:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:
	PowerFist();
	PowerFist(const PowerFist &src);
	virtual ~PowerFist();

	PowerFist& 		operator=(const PowerFist &rhs);

	void	attack(void) const;
};

#endif