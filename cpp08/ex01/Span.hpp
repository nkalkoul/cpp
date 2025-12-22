/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 11:57:04 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/22 14:12:11 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "vector"
#include <exception>
#include <iostream>
#include <cstdlib>

class Span{

private:
	unsigned int length;
	std::vector<int> store;

public:
	Span(unsigned int l);
	Span( void );
	Span( const Span &s);
	Span &operator=(const Span &s);
	~Span( void );
	void addNumber(const int n);
	int	shortestSpan( void );
	int	longestSpan( void );
};
