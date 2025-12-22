/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:10:19 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/20 11:05:36 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::const_iterator easyfind(const T &cont, int tofind){
	typename T::const_iterator it = cont.begin();
	while (it != cont.end()){
		if (*it == tofind)
			return it;
		it++;
	}
	throw std::runtime_error("not found");
}
