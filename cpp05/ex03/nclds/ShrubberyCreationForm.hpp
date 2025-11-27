/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:47:57 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/22 04:14:05 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &s );
		ShrubberyCreationForm( const std::string &t);
		~ShrubberyCreationForm( void );
		void action( void ) const;
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &s);
		ShrubberyCreationForm *create(const std::string &name, const std::string &target);
};