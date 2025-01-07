/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 02:25:49 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/07 03:08:54 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::Serializer(Serializer const & src) {
	*this = src;
}
Serializer & Serializer::operator=(Serializer const & rhs) {
	if (this != &rhs) {}
	return (*this);
}
Serializer::~Serializer() {}


uintptr_t Serializer::serialize(Data* ptr){
	// Data.age = ptr.raw;
	// Data.name = ptr.name;
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

