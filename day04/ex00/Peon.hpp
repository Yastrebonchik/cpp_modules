/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:44:12 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 18:17:16 by kcedra           ###   ########.fr       */
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
	virtual	~Peon();

	Peon&	operator=(const Peon& rhs);

	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Peon &src);

#endif