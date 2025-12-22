/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 21:38:46 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/14 11:11:23 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int &x) {
    std::cout << x << " ";
}

void increment(int &x) {
    x++;
}

void printString(const std::string &s) {
    std::cout << s << std::endl;
}


int main() {
    int tab[] = {1, 2, 3, 4};

    std::cout << "Avant increment: ";
    ::iter(tab, 4, printInt);
    std::cout << std::endl;

    ::iter(tab, 4, increment);

    std::cout << "Apres increment: ";
    ::iter(tab, 4, printInt);
    std::cout << std::endl;

    const int const_tab[] = {10, 20, 30};

    std::cout << "Tableau const: ";
    ::iter(const_tab, 3, printInt);
    std::cout << std::endl;

    std::string strs[] = {"hello", "world"};
    ::iter(strs, 2, printString);

    return 0;
}
