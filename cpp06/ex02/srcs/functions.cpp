/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:17:58 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/11 12:33:40 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "functions.hpp"

Base* generate(void) {
    int r = std::rand() % 3;

    if (r == 0)
        return new A();
    else if (r == 1)
        return new B();
    return new C();
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        throw std::runtime_error("identify(Base*): unknown type");
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::exception &e) {
        std::cout << "[identify(Base&) error] Not A: " << e.what() << std::endl;
    }

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::exception &e) {
        std::cout << "[identify(Base&) error] Not B: " << e.what() << std::endl;
    }

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::exception &e) {
        std::cout << "[identify(Base&) error] Not C: " << e.what() << std::endl;
    }

    throw std::runtime_error("identify(Base&): unknown type");
}
