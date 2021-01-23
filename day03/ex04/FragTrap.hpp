/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:42:55 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/23 21:08:35 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <ctime>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	virtual		~FragTrap();
	FragTrap&	operator=(const FragTrap& rhs);

	virtual void	rangedAttack(std::string const & target);
	virtual void	meleeAttack(std::string const & target);
	void			vaulthunter_dot_exe(std::string const & target);
	
private:
	FragTrap();
};

#endif
