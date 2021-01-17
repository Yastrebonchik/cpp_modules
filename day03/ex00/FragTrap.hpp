/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:42:55 by marvin            #+#    #+#             */
/*   Updated: 2021/01/16 13:42:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

class FragTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const &src);
	FragTrap&	operator=(const FragTrap& rhs);

	void		vaulthunter_dot_exe(std::string const & target);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

private:
	FragTrap();
	std::string			_name;
	int					_hitPoints;
	int					_energyPoints;
	static const int	_meleeAttackDamage = 30;
	static const int	_rangedAttackDamage = 20;
	static const int	_armorDamageReduction = 5;
	static const int	_maxEnergyPoints = 100;
	static const int	_maxHitPoints = 100;
	static const int	_level = 1;
};

#endif
