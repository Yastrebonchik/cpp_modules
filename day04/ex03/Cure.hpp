/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:49:43 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:05:46 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	
public:
	Cure();
	virtual	~Cure();
	Cure(const Cure &src);

	Cure&	operator=(const Cure &rhs);
	Cure* 	clone() const;
	void 	use(ICharacter& target);
};

#endif