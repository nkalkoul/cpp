/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:37 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/22 18:41:25 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nclds/Bureaucrat.hpp"
#include "../nclds/AForm.hpp"
#include "../nclds/ShrubberyCreationForm.hpp"
#include "../nclds/PresidentialPardonForm.hpp"
#include "../nclds/RobotomyRequestForm.hpp"
#include "../nclds/Intern.hpp"

int	main( void ){
	AForm *f = NULL;
	AForm *p = NULL;
	AForm *r = NULL;
	Bureaucrat b("idrissa", 1);
	Intern a;
	try {
		f = a.makeform("shrubbery creation", "salut");
		b.signForm(*f);
		f->execute(b);
		p = a.makeform("presidential pardon", "yo");
		b.signForm(*p);
		p->execute(b);
		r = a.makeform("salut", "bien");
		r->execute(b);
	}
	catch(const std::exception &e) {
		std::cerr << "catch : " << e.what() << std::endl;
		
	}
	delete(f);
	delete(p);
	delete(r);
}