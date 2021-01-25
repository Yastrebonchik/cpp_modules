/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 23:54:56 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 19:26:45 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();

	unsigned int	_xp;

protected:
	std::string		_type;

public:
	AMateria(std::string const & type);
	AMateria(const AMateria &src);
	virtual ~AMateria();

	AMateria&			operator=(const AMateria &rhs);

	std::string const & getType() const;
	unsigned int 		getXP() const;
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
};

#endif
