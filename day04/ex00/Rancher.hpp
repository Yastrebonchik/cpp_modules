/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rancher.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:20:26 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/24 18:17:02 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANCHER_HPP
#define RANCHER_HPP

#include "Victim.hpp"

class Rancher : public Victim
{
private:
	Rancher();

public:
	Rancher(std::string name);
	Rancher(const Rancher &src);
	virtual	~Rancher();

	Rancher&	operator=(const Rancher& rhs);

	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Rancher &src);

#endif
