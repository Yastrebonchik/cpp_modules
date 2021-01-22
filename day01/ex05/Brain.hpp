/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:13:05 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:26:30 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <ctime>

class Brain
{
public:
	Brain();
	~Brain();
	std::string identify() const;
	int			getBrainMass() const;

private:
	int	_mass;
};

#endif
