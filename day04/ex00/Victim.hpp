/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:07:53 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 18:17:00 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
private:
	Victim();

protected:
	std::string	_name;

public:
	Victim(std::string name);
	Victim(const Victim &src);
	virtual	~Victim();

	Victim&	operator=(const Victim& rhs);

	std::string	getName(void) const;

	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &src);

#endif
