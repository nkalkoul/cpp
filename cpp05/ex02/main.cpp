/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:37 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/12 19:54:28 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include AForm.hpp"

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
		AForm b("permis b", 100);
		AForm a("permis A", 49);
		Bureaucrat s("saif", 50);
		s.signForm( b );
		s.signForm(a);
		std::cout << b << std::endl << a << std::endl;
		AForm z("URSAFF", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << "erreur : " << e.what() << std::endl;
	}
}