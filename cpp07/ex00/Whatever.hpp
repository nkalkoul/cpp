/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 08:59:59 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/13 20:17:14 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>

void swap(T &v1, T &v2){
	T tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template <typename T>
T min(T v1, T v2){
	return (v1 < v2 ? v1 : v2);
}

template <typename T>
T max(T v1, T v2){
	return (v1 > v2 ? v1 : v2);
}
