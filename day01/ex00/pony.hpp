/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:48 by kcedra            #+#    #+#             */
/*   Updated: 2021/01/22 15:25:39 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
public:
    Pony();
    ~Pony();
    void    setPony(std::string Pony);
    void    ponyEat();
    void    ponySleep();
    void    ponyCompete(Pony *competitor);

private:
    int _maxSpeed;
    std::string _name;
};

Pony    ponyOnTheStack();
Pony    *ponyOnTheHeap();

#endif