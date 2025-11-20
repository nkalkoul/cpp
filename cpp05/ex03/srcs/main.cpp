/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:37 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/18 19:22:35 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nclds/Bureaucrat.hpp"
#include "../nclds/AForm.hpp"
#include "../nclds/ShrubberyCreationForm.hpp"
#include "../nclds/PresidentialPardonForm.hpp"
#include "../nclds/RobotomyRequestForm.hpp"

int	main( void ){
	AForm *f = NULL;
	AForm *p = NULL;
	AForm *r = NULL;
	try {
		Bureaucrat q("sinthujan", 50);
		Bureaucrat o("ouss", 1);
		ShrubberyCreationForm a("ff");
		f = new ShrubberyCreationForm("ok");
		p = new PresidentialPardonForm("ok");
		r = new RobotomyRequestForm("ok");
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
	}
	catch(const std::exception &e) {
		std::cerr << "catch : " << e.what() << std::endl;
		
	}
	delete(f);
	delete(p);
	delete(r);
}