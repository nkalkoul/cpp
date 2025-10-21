/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 07:40:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/21 08:16:05 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
    Harl( void );
    void	complain( std::string level );
    ~Harl( void );

};
