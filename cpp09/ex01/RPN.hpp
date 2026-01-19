/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:50:24 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/19 10:36:08 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <limits>


class RPN {
private:
	std::string line;

public :
	RPN(void){}
	RPN(const std::string &l);
	RPN(const RPN &r);
	RPN &operator=(const RPN &r);
	~RPN(void){}
	void calculator(void);
};
