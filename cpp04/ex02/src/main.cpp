/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:02:43 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 01:34:59 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << "--------------TEST FOR Alloc-----------------" << std::endl;
	delete j;
	delete i;
	Animal *a[10];
	for (int i = 0; i < 14; i++) {
		std::cout << "[" << i << "] ";
		if (i < 7)
			a[i] = new(std::nothrow) Cat();
		else
			a[i] = new(std::nothrow) Dog();
		if (!a[i]) {
			for (int j = 0; j < i; j++) {delete a[j];}
				std::cout << "Memory alloc error" << std::endl;
			return 1;
		}
	}
	
	std::cout << "--------------TEST FOR destruct-----------------" << std::endl;
	for (int i = 0; i < 14; i++){
		std::cout << "[" << i << "] ";
		delete a[i];
	}
	std::cout << "--------------TEST FOR COPYY-----------------" << std::endl;
	
	Dog c;
	c.setid("viande");
	Dog d;
	d = c;
	d.lookid();
	
	return 0;
}