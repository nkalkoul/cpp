/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 11:55:57 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/22 14:59:56 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): length(0){
 	store.reserve(length);
}

Span::Span( unsigned int l): length(l){
 	store.reserve(length);
}

Span::Span(const Span &s){
	*this = s;
}

Span &Span::operator=(const Span &s){
	if (this == &s)
		return (*this);
	this->length = s.length;
	this->store = s.store;
	return (*this);
}

Span::~Span( void ){
	
}

void Span::addNumber(const int n){
	if (store.size() < length)
		return (this->store.push_back(n));
	throw std::runtime_error("max length of store");
}

int	Span::shortestSpan( void ){
	if (static_cast<int>(store.size()) < 2)
		throw std::runtime_error("no enough number");
	int diff = std::abs(store[0] - store[1]);
	int i = 0;
	for (int j = 2; i < static_cast<int>(store.size()) - 1; j++){
		if (j == i)
			j++;
		if (j > static_cast<int>(store.size()) - 1){
			j = 0;
			i++;
		}
		if (std::abs(store[i] - store[j]) < diff)
			diff = std::abs(store[i] - store[j]);
	}
	return (diff);
}

int	Span::longestSpan( void ){
	if (static_cast<int>(store.size()) < 2)
		throw std::runtime_error("no enough number");
	int diff = std::abs(store[0] - store[1]);
	int i = 0;
	for (int j = 2; i < static_cast<int>(store.size()) - 1; j++){
		if (j == i)
			j++;
		if (j > static_cast<int>(store.size()) - 1){
			j = 0;
			i++;
		}
		if (std::abs(store[i] - store[j]) > diff)
			diff = std::abs(store[i] - store[j]);
	}
	return (diff);
}
