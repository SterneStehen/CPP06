/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 01:29:55 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/06 01:46:54 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "ScalarConverter.hpp"

int isPseudoLiteral(const std::string & s){
if(s == "nan" || s == "+nan" || s == "-nan" ||s == "inf" || s == "+inf" || s == "-inf" || s == "nanf" || s == "+nanf" || s == "-nanf" || s == "inff" || s == "+inff" || s == "-inff")
	return 1;
else	
	return 0;
}

void ScalarConverter::convert(const std::string& literal)
{


	enum Type { CHAR, INT, FLOAT, DOUBLE, INVALID };
    Type detectedType = INVALID;

    double value = 0.0;

			// check char
    if (literal.length() == 3 && literal.front() == '\'' && literal.back() == '\'') {
        detectedType = CHAR;
        value = static_cast<double>(literal[1]);
    }

	

	
	
    // check Pseudoliteral
    else if (isPseudoLiteral(literal)) {
        if (literal.find('f') != std::string::npos)
            detectedType = FLOAT;
        else
            detectedType = DOUBLE;

        if (literal.find("nan") != std::string::npos)
            value = std::numeric_limits<double>::quiet_NaN();
        else if (literal.find("+inf") != std::string::npos)
            value = std::numeric_limits<double>::infinity();
        else if (literal.find("-inf") != std::string::npos)
            value = -std::numeric_limits<double>::infinity();
    }	
    // check float ('f')
    else {
        size_t len = literal.length();
        if (literal.back() == 'f' || literal.back() == 'F') {
            std::string floatStr = literal.substr(0, len - 1);
            std::stringstream ss(floatStr);
            float f;
            ss >> f;
            if (ss && ss.eof()) {
                detectedType = FLOAT;
                value = static_cast<double>(f);
            }
        }
    }

    // check int and double
    if (detectedType == INVALID) {
        // check int
        std::stringstream ssInt(literal);
        int i;
        ssInt >> i;
        if (ssInt && ssInt.eof()) {
            detectedType = INT;
            value = static_cast<double>(i);
        }
        else {
            // check double
            std::stringstream ssDouble(literal);
            double d;
            ssDouble >> d;
            if (ssDouble && ssDouble.eof()) {
                detectedType = DOUBLE;
                value = d;
            }
        }
    }
	if (detectedType == INVALID) {
        std::cerr << "Error: Invalid literal format." << std::endl;
        return;
    }
	
	// CHAR
	std::cout << "char: ";
	if(std::isnan(value) || std::isinf(value) || value < -128 || value > 127)
		std::cout << "impossible" << std::endl;
	else 
		if(std::isprint(static_cast<unsigned char>(value)))
			std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;

	// INT
	std::cout << "int: ";
	if(std::isnan(value)  || std::isinf(value) || value < -2147483648 || value > 2147483647)
	{
		std::cout << "impossible " << std::endl;
	}
	else{
		std::cout << static_cast<int>(value) << std::endl;
	}	

	// FLOAT
	std::cout << "float: ";
	float fl = static_cast<float>(value);
	std::cout << std::fixed << std::setprecision(1);
	if(std::isnan(value))
		std::cout << "nanf" << std::endl;
	else if (std::isinf(value)){
		std::cout << (value < 0 ? "-inff" : "inff") << std::endl;
	}
	else
		std::cout << fl << 'f' << std::endl;
	
	// DOUBLE
	std::cout << "double: ";
	double d = static_cast<double>(value);
	std::cout << std::fixed << std::setprecision(1);
	if(std::isnan(value))
		std::cout << "nan" << std::endl;
	else if (std::isinf(value)){
		std::cout << (value < 0 ? "-inf" : "inf") << std::endl;
	}
	else
		std::cout << d  << std::endl;
};