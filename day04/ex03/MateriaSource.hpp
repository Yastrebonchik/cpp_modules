/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:40:15 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 15:40:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_book[4];

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &src);

	MateriaSource&	operator=(const MateriaSource &rhs);

	void 			learnMateria(AMateria* materia);
	AMateria* 		createMateria(std::string const & type);
};

#endif