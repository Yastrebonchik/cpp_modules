/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:22:45 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/25 22:15:23 by kcedra           ###   ########.fr       */
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
	virtual	~Character();

	Character&			operator=(const Character &rhs);

	std::string const & getName() const;
	void 				equip(AMateria* m);
	void				unequip(int idx);
	void 				use(int idx, ICharacter& target);
};

#endif
