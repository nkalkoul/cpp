/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:35 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/22 04:05:25 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <exception>

class AForm;

class Bureaucrat {

private :
	const std::string _name;
	int			_grade;

public :
	class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException(std::string name, int grade){
			std::ostringstream oss;
			oss << "grade from "<< name << " is to high : " << grade;
			_msg = oss.str();
			}
			virtual ~GradeTooHighException() throw() {
			}
			virtual const char *what() const throw(){
				return (_msg.c_str());
			}
		private:
			std::string _msg;
	};
		class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException( std::string name, int grade ){
				std::ostringstream oss;
			oss << "grade from "<< name << " is to loow : " << grade;
			_msg = oss.str();
			}
			virtual ~GradeTooLowException() throw() {
			}
			virtual const char *what() const throw(){
				return (_msg.c_str());
			}
		private:
			std::string _msg;
	};
	Bureaucrat( void );
	Bureaucrat( const std::string &name, const int grade);
	Bureaucrat( const Bureaucrat &b);
	~Bureaucrat( void );
	Bureaucrat &operator=( const Bureaucrat &b);
	int	getGrade( void ) const;
	std::string	getName( void ) const;
	void upgrade( void );
	void downgrade( void );
	void signForm ( AForm &f);
	
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &a);
