/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:41:30 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/30 10:59:25 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "---------------STACK---------------\n" << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "\nm stack with iterator :\n" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int>::reverse_iterator itee = mstack.rbegin();
	MutantStack<int>::reverse_iterator iteee = mstack.rend();
	std::cout << "\nm stack with reverse iterator :\n" << std::endl;
	while (itee != iteee)
	{
		std::cout << *itee << std::endl;
		++itee;
	}

	std::cout << "\n\n---------------LIST---------------\n" << std::endl;
	
	std::list<int> slist;
	slist.push_front(5);
	slist.push_front(17);
	std::cout << slist.front() << std::endl;
	slist.pop_front();
	std::cout << slist.size() << std::endl;
	slist.push_front(3);
	slist.push_front(5);
	slist.push_front(737);
	//[...]
	slist.push_front(0);
	std::list<int>::iterator i = slist.begin();
	std::list<int>::iterator ie = slist.end();
	++it;
	--it;
	std::cout << "\ns LIST with iterator :\n" << std::endl;
	while (i != ie)
	{
		std::cout << *i << std::endl;
		++i;
	}
	std::list<int>::reverse_iterator a = slist.rbegin();
	std::list<int>::reverse_iterator ae = slist.rend();
	std::cout << "\ns LIST with reverse iterator :\n" << std::endl;
	while (a != ae)
	{
		std::cout << *a << std::endl;
		++a;
	}

	
	return 0;
}