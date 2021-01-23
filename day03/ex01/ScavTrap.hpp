/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:29:11 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 17:45:34 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const &src);
	ScavTrap&	operator=(const ScavTrap& rhs);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
	int			getHP();

private:
	ScavTrap();
	std::string			_name;
	int					_hitPoints;
	int					_energyPoints;
	static const int	_meleeAttackDamage = 20;
	static const int	_rangedAttackDamage = 15;
	static const int	_armorDamageReduction = 3;
	static const int	_maxEnergyPoints = 50;
	static const int	_maxHitPoints = 100;
	static const int	_level = 1;
};

#endif