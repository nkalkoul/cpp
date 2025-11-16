/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:37 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/16 21:38:50 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nclds/Bureaucrat.hpp"
#include "../nclds/AForm.hpp"
#include "../nclds/ShrubberyCreationForm.hpp"
#include "../nclds/PresidentialPardonForm.hpp"
#include "../nclds/RobotomyRequestForm.hpp"

int	main( void ){
	
	try {
		Bureaucrat q("sinthujan", 50);
		Bureaucrat o("ouss", 1);
		ShrubberyCreationForm a("ff");
		AForm *f = new ShrubberyCreationForm("ok");
		AForm *p = new PresidentialPardonForm("ok");
		AForm *r = new RobotomyRequestForm("ok");
		q.signForm(*f);
		f->execute(q);
		q.signForm(*r);
		r->execute(q);
		
		o.signForm(*p);
		p->execute(o);
		r->execute(o);
		r->execute(q);
		std::cout << std::endl;
		q.signForm(*p);
		p->execute(q);
		delete(f);
		delete(p);
		delete(r);
	}
	catch(const std::exception &e) {
		std::cerr << "catch : " << e.what() << std::endl;

	}
}