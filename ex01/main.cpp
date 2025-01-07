/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 03:09:19 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/07 03:12:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Serializer.hpp"

int main() {

    Data* original = new Data;
    original->age = 40;
    original->name = "Sergii";

    uintptr_t raw = Serializer::serialize(original);

    Data* recovered = Serializer::deserialize(raw);

    if (recovered == original) {
        std::cout << "Success! The pointers match." << std::endl;
        std::cout << "recovered->age: " << recovered->age << std::endl;
        std::cout << "recovered->name: " << recovered->name << std::endl;
    } else {
        std::cout << "Error! The pointers do NOT match." << std::endl;
    }

    delete original;
    return 0;
}
