/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:02:20 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/05 23:24:46 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <cmath>

class ScalarConverter {
public:
    ScalarConverter() = delete;
    ~ScalarConverter() = delete;
    ScalarConverter(const ScalarConverter&) = delete;
    ScalarConverter& operator=(const ScalarConverter&) = delete;

    static void convert(const std::string& literal);
};

#endif

