/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:29:11 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 17:52:36 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &src);
	ScavTrap&	operator=(const ScavTrap& rhs);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		challengeNewcomer(void);
private:
	ScavTrap();
};

#endif