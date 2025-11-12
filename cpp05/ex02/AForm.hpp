/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:22:45 by nassuto           #+#    #+#             */
/*   Updated: 2025/11/11 19:39:16 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <exception>

class Bureaucrat;
class AForm {
	private:
		const std::string _name;
		bool _sign;
		const int	_signgrade;
		const int	_execgrade;

	public:
	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw(){
				return ("grade is too high!");
			}
	};
		class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw(){
				return ("grade is to looww...");
			}
		};
		AForm( void );
		AForm( const std::string &name, int grade );
		AForm( const AForm &f );
		~AForm( void );
		AForm &operator=(const AForm &f);
		int getsignGrade( void ) const;
		int	getexecGrade( void ) const;
		bool ifsigned( void ) const;
		std::string getName( void ) const;
		void beSigned( Bureaucrat const &b );
};

std::ostream &operator<<(std::ostream &out, AForm &f);