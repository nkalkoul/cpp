/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:49:23 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 00:17:31 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Brain.hpp"

Brain::Brain( void ){
	std::cout
		<< "The brain is created" << std::endl;
}

Brain::~Brain( void ){
	std::cout
		<< "The brain is dead" << std::endl;
}

Brain::Brain( const Brain &b ){
	std::cout	
		<< "The brain is Copied" << std::endl;
	*this = b;
}

Brain &Brain::operator=( const Brain &b){
	std::cout	
		<< "The brain surcharge = operator is called " << std::endl;
	if (this != &b)
	{
		for (int i = 0; i < 100; i++){
			this->ideas[i] = b.ideas[i]; 
		}
	}
	return (*this);
}

void Brain::setid(std::string id){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = id;

}

void Brain::lookid( void ){
	for (int i = 0; i < 5; i++)
		std::cout << " ideas " << i << " : " << this->ideas[i] << std::endl;
}