/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:39:30 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/18 11:52:15 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
Array<T>::Array( void ): length(0), elem(NULL){
}

template <typename T>
Array<T>::Array( const Array<T> &a):  elem(NULL), length(0){
	*this = a;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &a){
	if (this == &a)
		return (*this);
	delete[] this->elem;
	this->length = a.length;
	if (length < 1)
		return (*this);
	this->elem = new T[this->length];
	for (unsigned int i = 0; i < this->length; i++){
		this->elem[i] = a.elem[i];
	}
	return (*this);
}

template <typename T>
Array<T>::Array( unsigned int lengh): length(lengh){
	elem = new T[lengh];
}

template <typename T>
Array<T>::~Array( void ){
	delete[] this->elem;
}

template <typename T>
T &Array<T>::operator[](unsigned int i){
	if (i > this->length)
		throw std::runtime_error("Error of indexation []");
	return (this->elem[i]);
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return (this->length);
}