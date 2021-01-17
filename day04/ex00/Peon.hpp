/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:44:12 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 15:44:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Sorcerer.hpp"

class Peon : public Victim
{
private:
	Peon();

public:
	Peon(std::string name);
	Peon(const Peon &src);
	~Peon();

	Peon&	operator=(const Peon& rhs);

	std::string	getName(void) const;

	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Peon &src);

#endif