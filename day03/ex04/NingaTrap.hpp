/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NingaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 00:56:58 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 00:56:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	virtual		~NinjaTrap();
	NinjaTrap&	operator=(const NinjaTrap& rhs);

	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	void			ninjaShoebox(ClapTrap& rhs);
	void			ninjaShoebox(FragTrap& rhs);
	void			ninjaShoebox(ScavTrap& rhs);
	void			ninjaShoebox(NinjaTrap& rhs);

private:
};

#endif