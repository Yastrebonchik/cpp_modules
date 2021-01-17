/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 01:33:24 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 01:33:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NingaTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>
# include <ctime>

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	virtual		~SuperTrap();
	SuperTrap&	operator=(const SuperTrap& rhs);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

private:
	SuperTrap();
};

#endif
