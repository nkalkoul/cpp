/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 12:20:45 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/18 10:41:31 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>  
#include <exception>
#include <iostream>

template <typename T>
class Array{

private:
	T *elem;
	unsigned int length;

public:
	Array( void );
	Array( unsigned int lengh );
	Array(const Array &a);
	~Array( void );
	Array &operator=(const Array &a);
	T &operator[](unsigned int i);
	unsigned int size(void) const;
};

#include "Array.tpp"
