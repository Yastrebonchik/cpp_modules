/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NingaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 00:56:58 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 17:52:30 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	~NinjaTrap();
	NinjaTrap&	operator=(const NinjaTrap& rhs);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	ninjaShoebox(ClapTrap& rhs);
	void	ninjaShoebox(FragTrap& rhs);
	void	ninjaShoebox(ScavTrap& rhs);
	void	ninjaShoebox(NinjaTrap& rhs);

private:
	NinjaTrap();
};

#endif