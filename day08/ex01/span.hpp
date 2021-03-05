/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:57:52 by kcedra            #+#    #+#             */
/*   Updated: 2021/02/05 20:57:52 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <list>
# include <vector>
# include <iostream>

class Span
{
private:
	Span();

	std::vector<int>	_vector;
	size_t				_size;

public:
	Span(unsigned int quan);
	Span(const Span &src);
	~Span();

	size_t			getSize() const;
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;
	void			addNumber(int number);
	template <typename iterator>
	void			addNumber(iterator begin, iterator end)
	{
		if (this->_vector.size() + std::distance(begin, end) > this->_size)
			throw Span::ContainerOverflowException();
		this->_vector.insert(this->_vector.end(), begin, end);
	};

	class	NotEnoughNumbersException : public std::exception {
		virtual const char* what() const throw();	
	};
	class	ContainerOverflowException : public std::exception {
		virtual const char* what() const throw();	
	};
	Span&	operator=(const Span &rhs);
};

#endif
