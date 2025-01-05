/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 01:29:55 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/05 23:26:32 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal)
{
	
	const int INT_MIN = -2147483648;
	const int INT_MAX = 2147483647;

	//double value = 0.0;
	double value = std::stod(literal);

	std::cout << "int : ";
	if(std::isnan(value)  || std::isinf(value) || value < INT_MIN || value > INT_MAX)
	{
		std::cout << "impossible " << std::endl;
	}
	else{
		std::cout << static_cast<int>(value) << std::endl;
	}	
};




// class ScalarConverter
// {
// public:
// 	ScalarConverter(std::string str){};
// 	~ScalarConverter(){};
// 	static void convert(const std::string &str){
// 			try{
// 			if(str.size() == 1 && isprint(str[0]))
// 				std::cout << "char: "<< str[0] << std::endl;
// 			else
// 				std::cout << "char: "<< "impossible" << std::endl;
// 			}
// 			catch(...){
// 				std::cout << "int: impossible" << std::endl;	
// 			}
			
// 			try{
// 				int i = std::stoi(str);
// 				std::cout << "int : "<< i << std::endl;
// 			}
// 			catch(...){
// 				std::cout << "int: impossible" << std::endl;
// 			}	
// 			try{
// 				float f = std::stof(str);
// 				std::cout << "float : "<< f << std::endl;
// 			}
// 			catch(...){
// 				std::cout << "float: impossible" << std::endl;
// 			}
// 			try{
// 				double d = std::stod(str);
// 				std::cout << "double : "<< d << std::endl;
// 			}
// 			catch(...){
// 				std::cout << "double: impossible" << std::endl;
// 			}
// 		char c = static_cast<char>(str);
// 		int i = static_cast<int>(str);
// 		float f = static_cast<float>(str);
// 		double d = static_cast<double>(str);
// 		std::cout << "char: " << static_cast<char>(str); << std::endl;
// 		std::cout << "int : " << static_cast<int>(str); << std::endl;
// 		std::cout << "float : " << static_cast<float>(str); << std::endl;
// 		std::cout << "double : " << static_cast<double>(str); << std::endl;
// 	}
// };



