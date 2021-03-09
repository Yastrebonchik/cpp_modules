/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <kcedra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:11:02 by kcedra            #+#    #+#             */
/*   Updated: 2021/03/06 23:11:02 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
#define MUTANTSTACK

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack() : std::stack<T>(){};
	MutantStack(MutantStack &other) : std::stack<T>(other){};
	virtual	~MutantStack(){};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
	iterator 				begin(void){
		return (this->c.begin());
	};
	const_iterator			begin(void) const{
		return (this->c.begin());
	};
	reverse_iterator		rbegin(void){
		return (this->c.rbegin());
	};
	const_reverse_iterator	rbegin(void) const{
		return (this->c.rbegin());
	};
	iterator 				end(void){
		return (this->c.end());
	};
	const_iterator 			end(void) const{
		return (this->c.end());
	};
	reverse_iterator 		rend(void){
		return (this->c.rend());
	};
	const_reverse_iterator	rend(void) const{
		return (this->c.rend());
	};
};

#endif
