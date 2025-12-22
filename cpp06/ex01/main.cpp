/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:48:52 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/11 10:49:08 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data;
    data.value = 42;
    data.name = "Hello";

    std::cout << "Original pointer : " << &data << std::endl;

    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized (uintptr_t) : " << raw << std::endl;

    Data* ptr = Serializer::deserialize(raw);
    std::cout << "Deserialized pointer : " << ptr << std::endl;

    std::cout << "\nCheck values:" << std::endl;
    std::cout << "value = " << ptr->value << std::endl;
    std::cout << "name  = " << ptr->name << std::endl;

    return 0;
}
