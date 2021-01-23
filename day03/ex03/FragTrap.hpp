/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:42:55 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 17:52:25 by kcedra           ###   ########.fr       */
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
