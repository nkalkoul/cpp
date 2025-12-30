/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:35:55 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/30 10:00:12 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	typedef typename std::stack<T>::container_type::iterator	iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator begin(void){
		return (this->c.begin());
	}
	iterator end(void){
		return (this->c.end());
	}
	const_iterator cbegin(void) const{
		return (this->c.begin());
	}
	const_iterator cend(void) const{
		return (this->c.end());
	}
	reverse_iterator rbegin(void) {
		return (this->c.rbegin());
	}
	reverse_iterator rend(void){
		return (this->c.rend());
	}
	const_reverse_iterator crbegin(void) const{
		return (this->c.rbegin());
	}
	const_reverse_iterator crend(void) const{
		return (this->c.rend());
	}
};
