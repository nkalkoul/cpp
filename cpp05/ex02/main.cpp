/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:37 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/11 19:59:12 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ){
	try
	{
		Bureaucrat b("stud", 151);
		Bureaucrat e;
		e.downgrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "ERROR: \n" << e.what() << '\n';
	}
	try {
		Form b("permis b", 100);
		Form a("permis A", 49);
		Bureaucrat s("saif", 50);
		s.signForm( b );
		s.signForm(a);
		std::cout << b << std::endl << a << std::endl;
		Form z("URSAFF", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << "erreur : " << e.what() << std::endl;
	}
}