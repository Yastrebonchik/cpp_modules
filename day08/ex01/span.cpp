/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 21:41:55 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/05 21:41:55 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int	quan) : _size(quan)
{
}

Span::Span(const Span &src) : _size(src.getSize())
{
	*this = src;
}

Span::~Span()
{
}

Span&			Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		if (rhs.getSize() > this->_size)
			std::cout << "Can't add more" << std::endl;
		else
		{
			for (size_t i = 0; i < rhs._vector.size(); i++)
				this->addNumber(rhs._vector[i]);
		}
	}
	return (*this);
}

unsigned int	Span::shortestSpan() const
{
	int					shortest = INT_MAX;
	std::vector<int>	sorted(this->_vector);

	if (this->_size <= 1)
		throw Span::NotEnoughNumbersException();
	std::sort(sorted.begin(), sorted.end());
	for (size_t i = 1; i < sorted.size(); i++)
	{
		if (std::abs(sorted[i] - sorted[i - 1]) < shortest)
			shortest = std::abs(sorted[i] - sorted[i - 1]);
		//std::cout << sorted[i - 1] << std::endl;
	}
	//std::cout << sorted[sorted.size() - 1] << std::endl;
	//std::cout << "--------------" << std::endl;
	return (shortest);
}

unsigned int	Span::longestSpan() const
{
	if (this->_size <= 1)
		throw Span::NotEnoughNumbersException();
	return (*std::max_element(this->_vector.begin(), this->_vector.end()) - *std::min_element(this->_vector.begin(), this->_vector.end()));
}

void			Span::addNumber(int	number)
{
	if (this->_size == this->_vector.size())
		throw Span::ContainerOverflowException();
	this->_vector.push_back(number);
}

size_t			Span::getSize() const
{
	return (this->_size);
}

const char*		Span::NotEnoughNumbersException::what() const throw()
{
	return ("Exception: not enough numbers stored in container");
}

const char*		Span::ContainerOverflowException::what() const throw()
{
	return ("Exception: impossible to add more numbers to container");
}
