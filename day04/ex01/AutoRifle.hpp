/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AutoRifle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:14:43 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 20:28:29 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AUTORIFLE_HPP
# define AUTORIFLE_HPP

# include "AWeapon.hpp"

class AutoRifle : public AWeapon
{
private:
	
public:
	AutoRifle();
	AutoRifle(const AutoRifle &src);
	virtual ~AutoRifle();

	AutoRifle& 		operator=(const AutoRifle &rhs);

	void	attack(void) const;
};

#endif
