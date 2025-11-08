/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:41:31 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/24 22:36:11 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	
private:
	std::string ideas[100];

public:
	Brain( void );
	~Brain( void );
	Brain( const Brain &a );
	Brain &operator=( const Brain &a );
	void	setid(const std::string id);
	void lookid( void );
};
