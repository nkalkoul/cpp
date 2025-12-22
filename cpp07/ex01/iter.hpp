/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 20:19:07 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/14 11:07:56 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T *array, const std::size_t lengh, void(*f)(T &)){
	for (std::size_t i = 0; i < lengh; i++){
		f(array[i]);
	}
}

template <typename T>
void iter(const T *array, const std::size_t lengh, void(*f)(const T &)){
	for (std::size_t i = 0; i < lengh; i++){
		f(array[i]);
	}
}
