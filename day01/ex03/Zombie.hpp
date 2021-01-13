/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:58:02 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 13:58:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <ctime>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    void    setZombie(std::string type, std::string name);
    void    announce();

private:
    std::string _type;
    std::string _name;
};

#endif
