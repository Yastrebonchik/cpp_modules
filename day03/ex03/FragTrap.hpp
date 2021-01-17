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

# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <ctime>

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const &src);
	FragTrap&	operator=(const FragTrap& rhs);

	void		vaulthunter_dot_exe(std::string const & target);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
private:
	FragTrap();
};

#endif
