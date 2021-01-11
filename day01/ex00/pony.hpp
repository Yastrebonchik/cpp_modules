/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:19:48 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 00:19:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class pony
{
public:
    pony(int height, int age);
    ~pony();

private:
    int _height;
    int _age;
    int _tailLength;
    std::string _colour;
    std::string _furColour;
    std::string _eyesColour;
};

#endif