/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:04:22 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/22 15:00:09 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ){
	Span a(10001);
	try{
	for (int i = 0; i < 10000; i++){
		a.addNumber(i);
	}
	int diff = a.shortestSpan();
	int diff2 = a.longestSpan();
	std::cout << diff << std::endl << diff2 << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Error: " << e.what() << std::endl;
	};

	try{
		Span b(10);
		b.addNumber(5);
		b.addNumber(56);
		b.addNumber(77);
		b.addNumber(22);
		std::cout << "longest Span is : " << b.longestSpan() << "  and the shortest Span is : " << b.shortestSpan() << std::endl;	
	}
	catch(std::exception &e){
		std::cerr << "error2: " << e.what() << std::endl;
	};
}