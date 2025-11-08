/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:02:43 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/24 20:13:25 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	 std::cout << "--------------TEST FOR WRONG-----------------" << std::endl;
  const WrongAnimal* ours = new WrongAnimal();
  const WrongCat* oustiti = new WrongCat();
  std::cout << oustiti->getType() << " " << std::endl;
  oustiti->makeSound();
  ours->makeSound();
  delete meta;
  delete j;
  delete i;
  delete ours;
  delete oustiti;
  return 0;
}