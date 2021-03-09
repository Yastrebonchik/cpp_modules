/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:13:18 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/04 17:13:18 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <string>

template <typename T>
class Array {
private:
	T	*_array;
	int	_len;

public:
	Array()	{
		this->_array = nullptr;
		this->_len = 0;
	}
	Array(const Array &src)	{
		this->_array = new T[src.size()];
		this->_len = src.size();
	}
	Array(unsigned int len) {
		this->_array = new T[len];
		this->_len = len;
	}
	~Array() {
		delete[] this->_array;
	}
	int	size() {
		return (this->_len);
	}
	class OutOfLimitsException: public std::exception {
		virtual const char* what() const throw() {
			return ("Exception: value out of limits");
		}
	};
	T&	operator[](const int i) {
		if (i < 0 || i >= this->size())
			throw Array::OutOfLimitsException();
		return (this->_array[i]);
	}
};

#endif