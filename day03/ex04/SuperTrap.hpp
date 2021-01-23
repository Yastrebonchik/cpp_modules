/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 01:33:24 by marvin            #+#    #+#             */
/*   Updated: 2021/01/23 19:34:16 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "NingaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	virtual		~SuperTrap();
	SuperTrap&	operator=(const SuperTrap &rhs);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

private:
	SuperTrap();
};

#endif
