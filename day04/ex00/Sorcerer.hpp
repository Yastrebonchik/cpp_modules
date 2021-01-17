/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:23:55 by marvin            #+#    #+#             */
/*   Updated: 2021/01/17 14:23:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Sorcerer
{
private:
	Sorcerer();

	std::string	_name;
	std::string	_title;
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &src);
	~Sorcerer();

	Sorcerer&	operator=(const Sorcerer& rhs);

	std::string	getName(void) const;
	std::string	getTitle(void) const;

	void polymorph(Victim const &src) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &src);

#endif
