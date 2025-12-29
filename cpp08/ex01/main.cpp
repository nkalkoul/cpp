/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:04:22 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/22 20:41:08 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ){
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << "\n\n";
	try{
	Span a(10001);
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
	return 0;
}