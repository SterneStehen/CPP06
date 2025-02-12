/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 23:02:20 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/06 01:24:53 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <cmath>
#include <iomanip>
#include <stdexcept>
#include <limits>
#include <cctype>
#include <sstream>

class ScalarConverter {
public:
    ScalarConverter(); // only here to make the class uninstatiable.
     // ~ScalarConverter() = delete;
    // ScalarConverter(const ScalarConverter&) = delete;
    // ScalarConverter& operator=(const ScalarConverter&) = delete;

    static void convert(const std::string& literal);
	
};

#endif

