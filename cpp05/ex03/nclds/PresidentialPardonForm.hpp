/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:47:57 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/22 04:13:19 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm &s );
		PresidentialPardonForm( const std::string &t);
		~PresidentialPardonForm( void );
		PresidentialPardonForm &operator=( const PresidentialPardonForm &s);
		void action( void )const ;
		PresidentialPardonForm *create(const std::string &name, const std::string &target);
};