/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:18:01 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/11 12:30:18 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main() {
    std::srand(std::time(NULL));

    try {
        for (int i = 0; i < 5; i++) {
            Base* base = generate();

            std::cout << "Test #" << i + 1 << std::endl;

            std::cout << "identify(Base*): ";
            identify(base);

            std::cout << "identify(Base&): ";
            identify(*base);

            std::cout << std::endl;

            delete base;
        }
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
