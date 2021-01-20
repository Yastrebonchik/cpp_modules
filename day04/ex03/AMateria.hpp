/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 23:54:56 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 23:54:56 by marvin           ###   ########.fr       */
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

protected:
	std::string		_type;
	unsigned int	_xp;

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
