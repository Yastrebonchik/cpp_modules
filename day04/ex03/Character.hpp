/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:22:45 by marvin            #+#    #+#             */
/*   Updated: 2021/01/19 01:22:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	Character();
	std::string	_name;
	AMateria	*_inventory[4];

public:
	Character(std::string name);
	Character(const Character &src);
	~Character();

	Character&			operator=(const Character &rhs);

	std::string const & getName() const;
	void 				equip(AMateria* m);
	void				unequip(int idx);
	void 				use(int idx, ICharacter& target);
};

#endif
