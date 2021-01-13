/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:48 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 00:19:48 by marvin           ###   ########.fr       */
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
    int _height;
    int _age;
    int _maxSpeed;
    std::string _furColour;
};

Pony    ponyOnTheStack();
Pony    *ponyOnTheHeap();

#endif