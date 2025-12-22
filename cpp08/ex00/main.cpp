/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:10:27 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/20 11:49:36 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "vector"
#include "list"

int main( void ){
	std::vector<int> v(5);
	std::list<int> lst;

	for (int i = 0; i < 5; i++){
		v[i] = i;
		lst.push_back(i - 1);
	}

	try {
		int i = *easyfind(v, 4);
		std::cout << i << std::endl;
		int j = *easyfind(lst, 5);
		std::cout << j << std::endl;

	}
	catch(std::exception &e){
		std::cerr << "error: " << e.what() << std::endl;
	};
}