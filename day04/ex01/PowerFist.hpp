/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:24:13 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 18:27:46 by kcedra           ###   ########.fr       */
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