/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:35 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/09 00:51:59 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat {

private :
	const std::string _name;
	int			_grade;

public :
	Bureaucrat( void );
	Bureaucrat( const std::string &name, const int grade);
	Bureaucrat( const Bureaucrat &b);
	~Bureaucrat( void );
	Bureaucrat &operator=( const Bureaucrat &b);
};