/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 00:35:42 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/24 00:59:32 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;
	
	std::cout << "adress of String variable : " << &s << "\nAdress held by stringPTR : " << stringPTR << "\nAdress held by stringREF : " << &stringREF << std::endl;
	std::cout << "value of s : " << s << "\nvalue pointed by stringPTR : " << *stringPTR << "\nvalue pointed by stringREF : " << s << std::endl;
}