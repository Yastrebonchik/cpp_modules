/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:05:57 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 21:09:36 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	virtual		~ClapTrap();
	ClapTrap(ClapTrap const &src);
	ClapTrap&	operator=(const ClapTrap& rhs);

	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	int				getHP();
	int				getEnergyPoints();
	std::string		getName();

protected:
	ClapTrap();
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;
	int			_maxEnergyPoints;
	int			_maxHitPoints;
	int			_level;
};

#endif
