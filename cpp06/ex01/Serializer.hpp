/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:33:48 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/11 10:50:09 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"


class Serializer{
	
private:
	Serializer( void );
	Serializer( const Serializer &s);
	Serializer &operator=(const Serializer &s);
	~Serializer( void );

public:
	static uintptr_t serialize(Data *ptr);
	static Data* deserialize(uintptr_t raw);
};